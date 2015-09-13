/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193												*
* Title : Spoj-Coins Game	 									*
* Category : DP													*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

char a[1000010];

void dp(long int k,long int l)
{
	int i;
	int z=max(k,l);
	a[0]='0';
	a[1]='1';
	for(i=2;i<=1000000;i++)
	{

		if(i==k || i==l)
			a[i]='1';

		else if(a[i-1]=='0') 
			a[i]='1';
		
		else if(i-k >= 0 && a[i-k]=='0')
			a[i]='1';
		
		else if(i-l >= 0 && a[i-l]=='0')
			a[i]='1';
		
		else
			a[i]='0';
	}
}

int main()
{
	long int n,k,l,m;
	scanf("%ld%ld%ld",&k,&l,&m);
	dp(k,l);
	while(m--)
	{
		scanf("%ld",&n);
		if(a[n]=='1')
			printf("A");
		else
			printf("B");
	}
	return 0;
}
