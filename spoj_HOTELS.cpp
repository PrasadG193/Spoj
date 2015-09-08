/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Hotels-Hotels Along Coast 				*
* Category : DP							*
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
	int n,i,j;
	long long m,a[300010],max1,max;
	n=fin();
	m=finl();
	for(i=0;i<n;i++)
	{
		a[i]=finl();
	}
	i=0;j=1;
	max1=max=a[i];
	while(j<n)
	{
		max=max+a[j];
		j++;
		while(max>m && i<j)
		{
			max=max-a[i];
			i++;
		}
		if(max>max1)
			max1=max;

	}
	printf("%lld\n",max1);

	return 0;
}
