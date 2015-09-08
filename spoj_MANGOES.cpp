/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#define ll long long int
int main()
{
	int t;
	ll n,n1,i,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n1);n=n1;
		n-=2;
		if(n%2)
			n=n/2+1;
		else
			n=n/2;
		ans=(n*(2+(n-1)*2)/2)%n1;
		printf("%lld\n",ans);
	}
	return 0;
}
