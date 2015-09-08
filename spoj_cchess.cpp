/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Costly Chess					*
* Algorithm : Dijkstra's Algo					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
class abc
{
	public:
		int x,y,cost;
	abc(int a,int b,int c)
	{
		x=a;
		y=b;
		cost=c;
	}
};
struct comp
{
	bool operator()(abc a,abc b)
	{
		return a.cost>b.cost;
	}
};
int rd[8]={-2,-2,-1,-1,1,1,2,2};
int cd[8]={-1,1,-2,2,-2,2,-1,1};

void dijkstra(int a,int b,int x,int y)
{
	priority_queue<abc, vector<abc>, comp> q;
	int nr,nc;
	abc v(0,0,0);
	char visited[8][8];
	memset(visited,'0',sizeof(visited));
	q.push(abc(a,b,0));
	visited[a][b]=1;
	while(1)
	{
			v=q.top();
			q.pop();
		if(visited[v.x][v.y]=='1')
			continue;
		visited[v.x][v.y]='1';
		if(v.x==x && v.y==y)
		{
			printf("%d\n",v.cost);
			break;
		}
		for(int i=0;i<8;i++)
		{
			int nr=v.x+rd[i];
			int nc=v.y+cd[i];
			if(visited[nr][nc]=='1')
				continue;
			if(nr<0 || nr>=8 || nc<0 || nc>=8)
				continue;
			q.push(abc(nr,nc,v.cost+v.x*nr+v.y*nc));
		}
	}
}

int main()
{
	int a,b,c,d;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
		dijkstra(a,b,c,d);
	return 0;
}
