/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
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
	int t,n,k,a[110],i,count;long int sum;
	t=fin();
	while(t--)
	{
		count=sum=0;
		n=fin();k=fin();
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<0)
				count++;
		}
		if(count>=k)
		{
			for(i=0;i<k;i++)
				if(a[i]<0)
					a[i]=a[i]*(-1);
		}
		else if(k>count)
		{
			for(i=0;i<count;i++)
				if(a[i]<0)
					a[i]*=-1;
			k-=count;
			sort(a,a+n);
			k=k%2;
			if(k)
				a[0]*=-1;
		}
		for(i=0;i<n;i++)
			sum+=a[i];
		printf("%ld\n",sum);

	}
	return 0;
}
