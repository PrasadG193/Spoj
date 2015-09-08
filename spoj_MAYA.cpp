/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-MAYA 						*
* Category : -							*
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
	int n,d1,d2;
	long int index[]={1,20,360,7200,144000,2880000,57600000,1152000000};
	long long int ans;
	char a;
	while(1)
	{
		ans=0;
		n=fin();
		if(n==0)
			break;
		for(int i=n-1;i>=0;i--)
		{
			d1=0;d2=0;
			scanf("%c",&a);
			while(a=='.' || a=='-' || a==' ' || a=='S')
			{
				if(a=='.')
					d2++;
				else if(a=='-')
					d1++;
			scanf("%c",&a);
			}
			ans+=((d1*5+d2)*index[i]);
		}
		scanf("%c",&a);
		printf("%lld\n",ans);
	}
	return 0;
}
