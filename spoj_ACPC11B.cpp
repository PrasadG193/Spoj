/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-ACPC11B		 				*
* Category : brute force					*
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
	long int t,n1,n2,i,j,min,d;
	long int a[1010],b[1010];
	t=fin();
	while(t--)
	{
		min=9999999;
		n1=fin();
		for(i=0;i<n1;i++)
			a[i]=fin();
		n2=fin();
		for(i=0;i<n2;i++)
			b[i]=fin();

		for(i=0;i<n1;i++)
		{
			if(min==0)
				break;
			for(j=0;j<n2;j++)
			{
				d=abs(a[i]-b[j]);
				if(min>d)
					min=d;
				if(min==0)
					break;
			}
		}
		printf("%ld\n",min);
	}

	return 0;
}
