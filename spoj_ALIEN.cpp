/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Aliens at the train 				*
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
	int t,n;
	long long int k,sum,cnt1,sum1,a[100010];
	int i,j;
	t=fin();
	while(t--)
	{
		n=fin();
		k=finl();
		for(i=0;i<n;i++)
			a[i]=finl();
		i=0;j=1;
		sum=a[i];
		cnt1=1;
		sum1=k;
		while(j<n)
		{
			sum=sum+a[j];
			j++;
			while(sum>k)
			{
				sum=sum-a[i];
				i++;
			}

			if(cnt1<(j-i))
			{
				sum1=sum;
				cnt1=j-i;
			}
			else if(cnt1==(j-i))
			{
				if(sum1>sum)
					sum1=sum;
			}

		}
		printf("%lld %lld\n",sum1,cnt1);
		
	}
	return 0;
}
