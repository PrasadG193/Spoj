/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
 Title :  				
 Category : 						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#define ll long long int
#define gc getchar_unlocked
ll fin()
{
	ll res=0;
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
	ll t,n;
	ll res,N=1000000007;
	N*=24;
	int i;
	t=fin();
	while(t--)
	{
		res=1;
		n=fin();
		for(i=0;i<4;++i)
		{
			res=(res*n)%N;
			--n;
		}
		printf("%lld\n",res/24);
	}
	return 0;
}
