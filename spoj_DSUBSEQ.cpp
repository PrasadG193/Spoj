/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-Distinct Subsequence				*
* Algorithm : DP						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <algorithm>
#define mod 1000000007

using namespace std;

int main()
{
	int t,i;
	int prev[27];
	long long int dp[100010];
	char s[100010];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<27;i++)
			prev[i]=-1;
		scanf("%s",s);
		dp[0]=1;
		for(i=1;i<=strlen(s);i++)
		{
			dp[i]=dp[i-1]*2%mod;
			if(prev[s[i-1]-'A']!=-1)
			{
				dp[i]=(mod+(dp[i]-(dp[prev[(s[i-1]-'A')]-1])))%mod;
			}
			prev[s[i-1]-'A']=i;
		}
		printf("%lld\n",dp[i-1]%mod);
	}
	return 0;
}
