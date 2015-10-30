/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad J Ghangal					
 Title : spoj_SAMER08F 				
 Category : Math						
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
	int n;
	long long int r;
	while(1)
	{
		n=fin();
		if(n==0)
			break;
		r=(n*(2*n+1)*(n+1))/6;

		printf("%lld\n",r);

	}
	return 0;
}
