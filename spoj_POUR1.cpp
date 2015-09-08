/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Pouring water					*
* Category : DFS						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <queue>
#include <map>
#define gc getchar_unlocked
using namespace std;

int a,b,c;

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
	int x,y;
	int turns;
	abc(int i,int j,int k)
	{
		x=i;y=j;turns=k;
	}
};


int bfs()
{
	map < int, map <int ,char > > visited;
	int dr[]={a,0};
	int dc[]={0,b};


	int i;
	int n1,n2;
	queue<abc> q;
	q.push(abc(0,0,0));
	abc tmp(0,0,0);
	while(!q.empty())
	{
		tmp=q.front();
		q.pop();
		visited[tmp.x][tmp.y]='1';
		if(tmp.x==c || tmp.y==c)
			return tmp.turns;
		
		for(i=0;i<2;i++)
		{
			n1=tmp.x+dr[i];
			n2=tmp.y+dc[i];
			if(n1>a || n1<0 || n2>b || n2<0)
				continue;
			if(visited[n1][n2]=='1')
				continue;
			q.push(abc(n1,n2,tmp.turns+1));
		}

		n1=tmp.x+min(a-tmp.x,tmp.y);
		n2=tmp.y-min(a-tmp.x,tmp.y);
		if(visited[n1][n2]!='1' && n1<=a && n1>=0 && n2<=b && n2>=0)
			q.push(abc(n1,n2,tmp.turns+1));

		n2=tmp.y+min(b-tmp.y,tmp.x);
		n1=tmp.x-min(b-tmp.y,tmp.x);

		if(visited[n1][n2]!='1' && n1<=a && n1>=0 && n2<=b && n2>=0)
			q.push(abc(n1,n2,tmp.turns+1));

		if(visited[tmp.x][0]!='1')
			q.push(abc(tmp.x,0,tmp.turns+1));
		if(visited[0][tmp.y]!='1')
			q.push(abc(0,tmp.y,tmp.turns+1));

	}
	return 0;

}


int main()
{
	int t,tmp;
	t=fin();
	while(t--)
	{	
		a=fin();
		b=fin();
		c=fin();
		tmp=a+b;
		a=max(a,b);
		b=tmp-a;
		c=bfs();
		if(c)
			printf("%d\n",c);
		else
			printf("-1\n");
	}
	return 0;
}
