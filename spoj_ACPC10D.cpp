//* Author : Prasad J Ghangal					*
//* Title : Spoj-ACPC10D 						*

#include <stdio.h>
#include <string.h>
#include <algorithm>
#define gc getchar_unlocked
#define ll long int
using namespace std;


ll a[100010][3],dp[100010][3];

int main()
{
	ll n,i,j;
	int t=0;
	while(1)
	{
		t++;
		scanf("%ld",&n);
		if(n==0)
			break;
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			scanf("%ld",&a[i][j]);
		dp[0][0]=a[0][0];
		dp[0][1]=a[0][1];
		dp[0][2]=dp[0][1]+a[0][2];

		dp[1][0]=a[1][0]+dp[0][1];
		dp[1][1]=a[1][1]+min(dp[0][1],min(dp[1][0],dp[0][2]));
		dp[1][2]=a[1][2]+min(dp[1][1],min(dp[0][1],dp[0][2]));

		for(i=2;i<n;i++)
		for(j=0;j<3;j++)
		{
			if(j==0)
				dp[i][j]=a[i][j]+min(dp[i-1][j],dp[i-1][j+1]);
			else if(j==1)
				dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j-1],min(dp[i-1][j+1],dp[i-1][j])));
			else
				dp[i][j]=a[i][j]+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
		}
		printf("%d. %ld\n",t,dp[n-1][1]);
			
	}
	return 0;
	

}
