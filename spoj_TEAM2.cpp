/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-A Famous ICPC Team 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#define gc getchar_unlocked
#define ll long long int 
using namespace std;

int main()
{
	ll a[4];
	int t=0;
	while(scanf("%lld",&a[0])!=EOF)
	{
		t++;
		scanf("%lld",&a[1]);
		scanf("%lld",&a[2]);
		scanf("%lld",&a[3]);
		sort(a,a+4);
		printf("Case %d: %lld\n",t,a[3]+a[2]);
	}
	return 0;
}
