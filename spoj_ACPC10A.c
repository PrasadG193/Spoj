/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-What's next 					*
* Category : Math						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#define gc getchar_unlocked

int main()
{
	long int a,b,c;
	scanf("%ld%ld%ld",&a,&b,&c);
	while(a!=0 || b!=0 || c!=0)
	{
		if( b*b == a*c)
			printf("GP %ld\n",c*(c/b));
		else
			printf("AP %ld\n",c+(c-b));
		scanf("%ld%ld%ld",&a,&b,&c);
	}
	return 0;
}
