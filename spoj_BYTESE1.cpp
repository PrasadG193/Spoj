/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-BYTESE1		 				*
* Category : Dijkstras						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
#define gc getchar_unlocked

int m,n;
int a[110][110];
int limit;

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

class abc
{
	public:
		int x,y,cost;
	abc(int a,int b,int c)
	{
		x=a;y=b;
		cost=c;
	}

};

struct comp
{
	bool operator()(abc &a,abc &b)
	{
		return a.cost > b.cost;
	}
};

int dr[]={-1,0,0,1};
int dc[]={0,-1,1,0};

int bfs(int r,int c)
{
	int nr,nc;
	priority_queue<abc, vector<abc>, comp> q;
	char visited[110][110];
	memset(visited,'0',sizeof(visited));
	abc tmp(0,0,0);
	q.push(abc(0,0,a[0][0]));
	while(!q.empty())
	{
		tmp=q.top();
		q.pop();
		visited[tmp.x][tmp.y]='1';
//		cout<<tmp.x<<" "<<tmp.y<<" "<<tmp.cost<<"\n";
		if(tmp.x==r && tmp.y==c)
			return tmp.cost;
		for(int i=0;i<4;i++)
		{
			nr=tmp.x+dr[i];
			nc=tmp.y+dc[i];
			if(nr<0 || nc<0 || nr>=m || nc>=n)
				continue;
			if(visited[nr][nc]=='1')
				continue;
			q.push(abc(nr,nc,tmp.cost+a[nr][nc]));
		}
	}
	return -1;
}


int main()
{
	int t,r,c,ans;
	t=fin();
	while(t--)
	{
		m=fin();
		n=fin();
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				a[i][j]=fin();
		r=fin();
		c=fin();
		limit=fin();
		ans=bfs(r-1,c-1);
		if(ans<=limit)
			printf("YES\n%d\n",limit-ans);
		else
			printf("NO\n");
			
	}
	return 0;
}
