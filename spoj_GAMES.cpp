/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-GAMES	 					*
* Algorithm : Category-Math					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#include <string.h>

long long int gcd(long long int a,long long int b)
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}

int main()
{
	int t;long long int k;char avg[15],flag;
	double x,y;int cnt;
	scanf("%d",&t);
	while(t--)
	{
		cnt=0;flag='0';
		k=0;
		scanf("%s",avg);
		for(int i=0;i<strlen(avg);i++)
		{
			if(flag=='1')
				cnt++;
			if(avg[i]=='.')
				flag='1';
			else
			{
				k=k*10+(avg[i]-48);
			}

		}
		k=k*(10000/(pow(10,cnt)));
//		printf("%lld\n",k);
		k=gcd(k,10000);
		printf("%lld\n",10000/k);
	}
	return 0;
}
