/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  					*
* Algorithm : 					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#include <string.h>
#define gc getchar_unlocked

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
	int i,j;
	long long int t,ans,n;
	char a[50];
	t=finl();
	while(t--)
	{
		i=0;
		n=finl();
		if(n%2==0)
		{
			while(n)
			{
				a[i]='0'+n%2;
				n=n/2;
				i++;
			}
			a[i]='\0';
//			printf("%s\n",a);
			ans=0;
			j=0;
			for(i=strlen(a)-1;i>=0;i--)
			{
				ans+=(a[i]-48)*pow(2,j);
				j++;
			}
		}
		else
			ans=n;
		printf("%lld\n",ans);
	}
	return 0;
}
