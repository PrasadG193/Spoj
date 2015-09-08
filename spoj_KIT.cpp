/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked
/*
char fchar()
{
	register char c=gc();
	while(c<'a' || c>'z')
		c=cg();
	return c;
}*/



int main()
{
	int n,a[110],i;
	char c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%c",&c);
	while(c=='\n')
	scanf("%c",&c);
	i=0;
	while((c>='a' && c<='z')||(c==' ')||(c=='\n'))
	{
		if(c==' ' || c=='\n')
			printf("\n");
		else
		{
			if((c+a[i]) > 'z')
			{
				c='a'+((c+a[i])%('z'+1));
				
			}
			else
				c=c+a[i];
			printf("%c",c);
			i++;
		}
		i=i%n;
	scanf("%c",&c);
	}
		
	return 0;
}
