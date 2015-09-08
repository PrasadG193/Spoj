/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj 				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
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

int a[10000001];

int main()
{
	long int i,t,n,sum,start,num;
	a[1]=1;a[2]=2;
	for(i=3;i<=10000000;i++)
	{
		a[i]=a[i-1]+(i-1);
	}
//	for(i=0;i<=100;i++)
//		printf("%d ",a[i]);

	t=fin();
	while(t--)
	{
		n=fin();
		for(i=0;i<=10000000;i++)
		{
			if(a[i]>n)
			{
				start=a[i-1];
				sum=i;
				break;
			}
		}
//		printf("start=%ld sum=%ld\n",start,sum);
		num=n-start+1;
		if(sum%2)
		printf("TERM %ld IS %ld/%ld\n",n,num,sum-num);
		else
		printf("TERM %ld IS %ld/%ld\n",n,sum-num,num);

	}

	return 0;
}
