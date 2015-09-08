#include<stdio.h>
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int a[1001],n;

int find(int par)
{
    while (a[par] != par) {
        a[par] = a[a[par]];
        par = a[par];
    }
    return par;
}

struct point
{
	int x1, y1;
	int x2, y2;
	point(int a,int b,int a1,int b1)
	{
		x1=a;y1=b;
		x2=a1;y2=b1;
	}
};


int orient(point p,int x,int y)
{
	int val = (p.y2-p.y1)*(x-p.x2)-(p.x2-p.x1)*(y-p.y2);
	if(val==0)
		return 0;
	else if(val>0)
		return 1;
	else 
		return 2;
}
int check_inter(point p1,point p2)
{
	int f1,f2,f3,f4;
		f1=orient(p1,p2.x1,p2.y1);
		f2=orient(p1,p2.x2,p2.y2);
		f3=orient(p2,p1.x1,p1.y1);
		f4=orient(p2,p1.x2,p1.y2);
		if((f1!=f2)&&(f3!=f4))
			return 1;
		else
			return 0;
}	

void unionset(int p,int q)
{
	int r1=find(p);
	int r2=find(q);
//		if(a[i]==r2)
	if(r2<r1)
			a[r2]=r1;
	else
			a[r1]=r2;
}

int main()
{
	int t,m,a1,a2,b1,b2,f1,f2,f3,f4,flag,i,j,q1,q2,count;
	vector<point> v;
	scanf("%d",&t);
	while(t--)
	{
		v.clear();
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
		{	
			scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
			v.push_back(point(a1,b1,a2,b2));
			a[i+1]=i+1;
		}
		j=0;int flag1=0;
		for(i=0;i<n;i++)
		{
		
			for(j=i+1;j<n;j++)
			{
				flag=0;
				if((v[i].x1==v[j].x1)&&(v[i].y1==v[j].y1))
					flag=1;
				else if((v[i].x1==v[j].x2)&&(v[i].y1==v[j].y2))
					flag=1;
				else if((v[i].x2==v[j].x1)&&(v[i].y2==v[j].y1))
					flag=1;
				else if((v[i].x2==v[j].x2)&&(v[i].y2==v[j].y2))
					flag=1;
	
		 		else if(check_inter(v[i],v[j]))
					flag=1;	
				if(flag==1){
					unionset(a[i+1],a[j+1]);
				}
			}
		}
	while(m--)
		{
			scanf("%d%d",&q1,&q2);
			if(find(q1)==find(q2))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
