/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Divisibility by 3				*
* Category : Math
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#define gc getchar_unlocked
unsigned long long m=1000000007;

unsigned long long pow1(unsigned long long n)
{
	unsigned long long ans=2,tmp=1;
	while(n>0)
	{
		if(n%2==1)
			tmp=tmp*ans%m;
		ans=ans*ans%m;
		n=n/2;
	}
	return tmp;
}
int main()
{
	unsigned long long n;
	m=3*m;
	while(scanf("%llu",&n)!=EOF)
	{
		n=pow1(n);
		printf("%llu\n",(n/3+1)%m);
	}
	return 0;
}
