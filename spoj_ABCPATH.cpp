/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : SPOJ-ABCPATH						*
* Category : DFS						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

char a[60][60];
char ans[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int dr[]={-1,-1,-1,0,0,1,1,1};
int dc[]={-1,0,1,-1,1,-1,0,1};

int dp[60][60];
int r,c;
int dfs(int cr,int cc,int index)
{
	if(dp[cr][cc]!=-1)
		return dp[cr][cc];
	int index1=1;
	int nr,nc;
	for(int i=0;i<8;i++)
	{
		nr=cr+dr[i];
		nc=cc+dc[i];
		if(nr<0 || nc<0 || nr>=r || nc>=c)
			continue;
		if(a[nr][nc]==ans[index+1])
		{
			index1=max(index1,1+dfs(nr,nc,index+1));
		}
	}
	dp[cr][cc]=index1;
	return index1;

}
int main()
{
	int c1=0,i,max1,j,tmp;
	while(1)
	{
		max1=0;
		c1++;
		scanf("%d%d",&r,&c);
		if(r==0 && c==0)
			break;
		for(i=0;i<r;i++)
		{
			scanf("%s",a[i]);
		}
		memset(dp,-1,sizeof(dp));
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			if(a[i][j]=='A')
			{
				tmp=dfs(i,j,0);
				if(max1<tmp)
					max1=tmp;
			}
		}
		printf("Case %d: %d\n",c1,max1);

	}
	return 0;
}
