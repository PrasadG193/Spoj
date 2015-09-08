#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
class abc
{
	public:
		int start;
		int end;
	abc(int x,int y)
	{
		start=x;
		end=y;
	}
};

bool cmp(abc p,abc q)
{
	return p.end<q.end;
}

int main()
{
	int t,n,i,tmp,tmp1,count,j,end;
	vector<abc> l1;
	vector<abc>:: iterator it;
	scanf("%d",&t);
	while(t--)
	{
		l1.clear();
		scanf("%d",&n);
		count=1;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&tmp,&tmp1);
			l1.push_back(abc(tmp,tmp1));
		}
		sort(l1.begin(),l1.end(),cmp);
		end=l1[0].end;
		for(i=1;i<n;i++){
	//	count=0;
//		for(j=i;j<n;j++){
		//	if((*it).end==(*it+1).start)
	//	{
			if(end<=l1[i].start){
				count++;
				end=l1[i].end;
			}
		//	cout<<l1[i].start<<" "<<l1[i].end<<"\n";
		//	cout<<l1[i].start<<" "<<l1[i+1].end<<"\n";
		}
		cout<<count<<"\n";
	}
	return 0;
}


