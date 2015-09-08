/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  Spoj-Fashion		 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

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
	int t,a[1010],b[1010];
	int n,i;
	long int sum;
	t=fin();
	while(t--)
	{
		n=fin();
		sum=0;
		for(i=0;i<n;i++)
			a[i]=fin();
		for(i=0;i<n;i++)
			b[i]=fin();
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;i++)
			sum+=a[i]*b[i];
		printf("%ld\n",sum);

	}
	return 0;
}
