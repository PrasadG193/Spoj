/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <queue>
#include <string.h>
#include <algorithm>
#define gc getchar_unlocked

using namespace std;
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



struct abc
{
	char res[200];
	int mod;
};

char visited[20010];

void bfs(int n)
{
	memset(visited,'0',sizeof(visited));
	queue<abc> q;
	abc tmp,tmp1;
	strcpy(tmp.res,"1");
	tmp.mod=1;
	visited[tmp.mod]='1';
	q.push(tmp);
	while(!q.empty())
	{
		tmp=q.front();
		q.pop();
		if(tmp.mod==0)
		{
			printf("%s\n",tmp.res);
			break;
		}
		else
		{
			tmp1.mod=(tmp.mod*10+0)%n;
			if(visited[tmp1.mod]!='1')
			{
				visited[tmp1.mod]='1';
				strcpy(tmp1.res,tmp.res);
				strcat(tmp1.res,"0");
				if(tmp1.mod==0)
				{
					printf("%s\n",tmp1.res);
					break;
				}
				q.push(tmp1);
			}
			tmp1.mod=(tmp.mod*10+1)%n;
			if(visited[tmp1.mod]!='1')
			{
				visited[tmp1.mod]='1';
				strcpy(tmp1.res,tmp.res);
				strcat(tmp1.res,"1");
				if(tmp1.mod==0)
				{
					printf("%s\n",tmp1.res);
					break;
				}
				q.push(tmp1);
			}
		}
	}
}

int main()
{
	int t,n,i;
	t=fin();
	while(t--)
	{

		n=fin();
		bfs(n);
	}
	return 0;
}
