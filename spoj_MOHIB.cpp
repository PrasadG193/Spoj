/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Mohib and Series 				*
* Category : Math						*
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

int main()
{
	int t;
	int x,avg,n,sum,sum1;
	t=fin();
	while(t--)
	{
		x=fin();
		avg=fin();
		n=avg-x;
		sum=(avg+1)*n;
		sum1=n*(n-1)/2;
		printf("%d\n",sum-sum1);

	}
	return 0;

}
