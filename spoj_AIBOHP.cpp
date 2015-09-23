/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-AIBOHP  						*
* Category : LCS						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

static unsigned short int mem[6110][6110];
int dp(char s1[],char s2[],int m,int n)
{
	for(int i=0;i<=m;i++)
	for(int j=0;j<=n;j++)
	{
		if(i==0 || j==0)
			mem[i][j]=0;
		else if(s1[i-1]==s2[j-1])
			mem[i][j]=1+mem[i-1][j-1];
		else
			mem[i][j]= max(mem[i][j-1],mem[i-1][j]);
	}
	return mem[m][n];
}

int main()
{
	char s1[6110];
	char s2[6110];	
	int t,m,n,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s1);
		m=strlen(s1);
		n=0;
		for(int i=m-1;i>=0;i--)
		{
			s2[n]=s1[i];
			n++;
		}
		n=m;
		printf("%d\n",m-dp(s1,s2,m,n));
	}
	
	return 0;
}
