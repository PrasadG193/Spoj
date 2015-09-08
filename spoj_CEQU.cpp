/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

long int fin()
{
	long int res=0;
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
	long int t,a,b,c,cn=0;
	t=fin();
	while(t--)
	{
		cn++;
		a=fin();
		b=fin();
		c=fin();
		if(c%__gcd(a,b)==0)
			printf("Case %ld: Yes\n",cn);
		else
			printf("Case %ld: No\n",cn);
	}
	return 0;
}
