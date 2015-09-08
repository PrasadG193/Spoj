/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Edit Distance Again				*
* Algorithm : Brute Force					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <algorithm>
#define gc getchar_unlocked

using namespace std;
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
	char a[1010],b[1010],c[1010];
	char d[2]={'0','1'};
	int d1,d2;
	while(scanf("%s",a)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			b[i]=d[i%2];
			c[i]=d[(i+1)%2];
			if(a[i] >='A' && a[i]<='Z')
				a[i]='1';
			else
				a[i]='0';
		}
		d1=d2=0;
		for(int i=0;i<strlen(a);i++)
		{
			if(a[i]!=b[i])
				d1++;
			if(a[i]!=c[i])
				d2++;
		}
	//	printf("%s\n%s\n%s\n",a,b,c);
		printf("%d\n",min(d1,d2));
	
	}
	return 0;
}
