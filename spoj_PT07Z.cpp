/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj_PT07Z		 				*
* Category : bfs						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <string.h>
#define gc getchar_unlocked
using namespace std;

vector<int> a[10010];
int n;
int cost[10010];
char visited[10010];

int fin()
{
	int res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

void bfs(int root)
{
	cost[root]=0;
	queue<int>q;
	q.push(root);
	visited[root]='1';
	while(!q.empty())
	{
		root=q.front();
		q.pop();
		visited[root]='1';
		for(int i=0;i<a[root].size();i++)
		{
			if(visited[a[root][i]]!='1')
			{
				cost[a[root][i]]=cost[root]+1;
				q.push(a[root][i]);
			}

		}
	}

}

int main()
{
	int x,y,maxroot=-1,maxcost=-1;;
	n=fin();
	memset(cost,0,sizeof(cost));
	memset(visited,'0',sizeof(visited));
	for(int i=1;i<n;i++)
	{
		x=fin();
		y=fin();
		a[x].push_back(y);
		a[y].push_back(x);
	}
	bfs(1);
	for(int i=1;i<=n;i++)
	{
		if(cost[i]>maxcost)
		{
			maxcost=cost[i];
			maxroot=i;
		}
	}
	memset(cost,0,sizeof(cost));
	memset(visited,'0',sizeof(visited));
	bfs(maxroot);
	maxcost=-1;
	for(int i=1;i<=n;i++)
	{
		if(cost[i]>maxcost)
		{
			maxcost=cost[i];
		}
	}
	printf("%d\n",maxcost);
	return 0;
}
