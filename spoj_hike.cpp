/* * * * * * * * * * * * * * * * * * * * * * * * * * * **
 * Author: Prasad Ghangal				*
 * Title: Spoj-hike on graphs				*
 * Algo: BFS						*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * **/
 
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<string.h>
#define gc getchar_unlocked
using namespace std;

char get()
{
	char c=gc();
	while(c<'a' || c>'z')
		c=gc();
	return c;
}

class abc
{
	public:
		int node1;
		int node2;
		int node3;
		int level;
	abc(int p,int q,int r,int s)
	{
		node1=p;
		node2=q;
		node3=r;
		level=s;
	}
};

char a[51][51];
int bfs(int s1,int s2,int s3,int n)
{
	queue<abc> q1;
	char visited1[51][51][51];
	memset(visited1,'0',sizeof(visited1));
	abc obj(0,0,0,0);
	visited1[s1][s2][s3]='1';
	q1.push(abc(s1,s2,s3,0));

	while(!q1.empty())
	{
		obj=q1.front();
		q1.pop();
		for(int i=0;i<n;i++)
		{
			if(obj.node1==obj.node2 && obj.node2==obj.node3)
				return obj.level;
	
			if((a[obj.node1][i]==a[obj.node2][obj.node3])&&(visited1[i][obj.node2][obj.node3]=='0'))
			{
				q1.push(abc(i,obj.node2,obj.node3,obj.level+1));
				visited1[i][obj.node2][obj.node3]='1';
			}
			if((a[obj.node2][i]==a[obj.node1][obj.node3])&&(visited1[obj.node1][i][obj.node3]=='0'))
			{
				visited1[obj.node1][i][obj.node3]='1';
				q1.push(abc(obj.node1,i,obj.node3,obj.level+1));
			}
			if((a[obj.node3][i]==a[obj.node1][obj.node2])&&(visited1[obj.node1][obj.node2][i]=='0'))
			{
				visited1[obj.node1][obj.node2][i]='1';
				q1.push(abc(obj.node1,obj.node2,i,obj.level+1));
			}
		}
	}
	return -1;
}

int main()
{
	int n,s1,s2,s3,i,j,res;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		scanf("%d%d%d",&s1,&s2,&s3);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				//scanf("%c ",&a[i][j]);
				a[i][j]=get();
			}
		res=bfs(s1-1,s2-1,s3-1,n);
		if(res==-1)
			printf("impossible\n");
		else
			printf("%d\n",res);	
	}
	return 0;
}
