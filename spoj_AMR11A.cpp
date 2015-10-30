/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj- Magic Grid 					*
* Algorithm : DP						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int a[510][510];

int dp(int r,int c)
{
	int b[r][c];
	if(a[r-1][c-1]<=0)
		b[r-1][c-1]=1-a[r-1][c-1];

	for(int i=c-2;i>=0;--i)
	{
		b[r-1][i]=b[r-1][i+1]-a[r-1][i];
		if(b[r-1][i]<=0)
			b[r-1][i]=1;
	}
	for(int i=r-2;i>=0;--i)
	{
		b[i][c-1]=b[i+1][c-1]-a[i][c-1];
		if(b[i][c-1]<=0)
			b[i][c-1]=1;
	}

	for(int i=r-2;i>=0;--i)
	for(int j=c-2;j>=0;--j)
	{
		b[i][j]=min(b[i+1][j],b[i][j+1])-a[i][j];
		if(b[i][j]<=0)
			b[i][j]=1;
	}

//	for(int i=0;i<r;++i)
//	{
//		cout<<endl;
//	for(int j=0;j<c;++j)
//		cout<<b[i][j]<<" ";
//	}
	return b[0][0];
}


int main()
{
	int t;
	scanf("%d",&t);
	int r,c;
	while(t--)
	{
		scanf("%d%d",&r,&c);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				scanf("%d",&a[i][j]);
		printf("%d\n",dp(r,c));
	}
	return 0;
	
}
