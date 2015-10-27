/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-CRAN02		 				*
* Category : math						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#include<string.h>
#include <iostream>
#include<map>
#define ll long long int 
using namespace std;

ll a[1000010];
map<ll,ll> hash;

int main()
{
	ll t,n,j,tmp;
	ll sum,ans,max,i;
	scanf("%lld",&t);
	while(t--)
	{
		ans=sum=0;
		hash.clear();
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&tmp);
			sum+=tmp;
			a[i]=sum;
			hash[sum]++;
		}
		for(i=0;i<n;i++)
			if(a[i]==0)
				++ans;

		for(map<ll,ll>::iterator it=hash.begin();it!=hash.end();++it)
		{
		//	cout<<it->second<<"\n";
			tmp=it->second;
			if(tmp>=2)
			{
				ans+=(tmp*(tmp-1)/2);
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
