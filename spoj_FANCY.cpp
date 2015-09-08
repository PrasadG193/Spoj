/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Fansy Number 					*
* Algorithm 	:						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
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
	int t,l,i;
	long int res;
	char a[31];
	t=fin();
	while(t--)
	{
		res=1;
		scanf("%s",a);
		l=strlen(a);
		for(i=0;i<l-1;i++)
		{
			if(a[i]==a[i+1])
				res=res*2;
		}
		printf("%ld\n",res);
	}
	return 0;
}
