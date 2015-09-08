/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <map>
using namespace std;
#define gc getchar_unlocked
#define ll long long int 

map<int, ll> hash;

ll dp(ll n)
{
	ll r;
	if(n==0)
		return 0;
	if(hash[n]==0)
	{
		r=max(n,dp(n/2)+dp(n/3)+dp(n/4));
		hash[n]=r;
	}
		return hash[n];
}

int main()
{
	ll n;
	while(scanf("%lld",&n)!=EOF)
	{
		printf("%lld\n",dp(n));
	}
	return 0;
}
