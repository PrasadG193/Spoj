/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-abs(a-b) 					*
* Cat : Math				*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
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

long long int finl()
{
	long long int res=0;
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
	int t,n,i,k;
	long long int a[10010],ans;
	t=fin();
	while(t--)
	{
		n=fin();
		for(i=0;i<n;i++)
		{	
			a[i]=finl();
		}
		k=-1*(n-1);
		ans=0;
		for(i=0;i<n;i++)
		{
			ans+=(k*a[i]);
			k+=2;

		}
		printf("%lld\n",ans);
	}

	return 0;
}
