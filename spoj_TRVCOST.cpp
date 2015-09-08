#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked

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

int main()
{
	int i,j,n,a1,b1,w,u,q;
	int a[510][510];
	long int dist[510];
	char visited[510];
	memset(visited,'0',sizeof(visited));
	n=fin();
	for(i=0;i<510;i++)
		dist[i]=999999999;
	for(i=0;i<n;i++)
	{
		a1=fin();
		b1=fin();
		w=fin();
		if(a[a1][b1]>w || a[a1][b1]==0)
		{
			a[a1][b1]=w;
			a[b1][a1]=w;
		}
	}
	u=fin();
	q=fin();
	dist[u]=0;
	int v;
	long int min1=999999999;
	while(1)
	{
		min1=999999999;
		for(i=0;i<510;i++)
		{
			if(dist[i]<min1 && visited[i]=='0')
			{
				min1=dist[i];
				v=i;
			}
		}
		if(min1==999999999)
			break;
		visited[v]='1';
		for(i=0;i<510;i++)
		{
			if(dist[i] > dist[v]+a[v][i] && a[v][i]!=0)
				dist[i]=dist[v]+a[v][i];
		}
	}
	for(i=0;i<q;i++)
	{
	 	u=fin();
		if(dist[u]==999999999)
			printf("NO PATH\n");
		else
			printf("%ld\n",dist[u]);
	}

	return 0;
}
