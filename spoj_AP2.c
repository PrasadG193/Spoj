/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Complete the Series				*
* Categoty : Math						*
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
	int t;
	long long int x,y,sum,n,a,d,i;
	t=fin();
	while(t--)
	{
		x=finl();
		y=finl();
		sum=finl();
		n=2*sum/(x+y);
		d=(2*sum/n-2*x)/(n-5);
		a=(x-2*d);
		printf("%lld\n",n);
		for(i=0;i<n;i++)
		{
			printf("%lld ",a);
			a+=d;
		}
		printf("\n");
	}
	return 0;
}
