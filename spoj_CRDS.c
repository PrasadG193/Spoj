/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
 Title :  				
 Category : 						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#define gc getchar_unlocked
#define N 1000007

int fin()
{
	int res=0;
	register char c=gc();
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

int main()
{
	int a[1000010];
	int t,n,i;
	t=fin();
	a[0]=0;
	for (i = 1; i <= 1000000; ++i) 
	{
		a[i]=(a[i-1]+i)%N;
	}
	while(t--)
	{
		n=fin();
		printf("%d\n",(2*a[n]%N+a[n-1]%N)%N);
	}
	return 0;
}
