/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-FACEFRND		 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
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

int a[10000];

int main()
{
	int t,n,k,count;
	t=fin();
		memset(a,0,sizeof(a));
		count=0;
	while(t--)
	{
		k=fin();
		a[k]=-1;
		n=fin();
		for(int i=0;i<n;i++)
		{
			k=fin();
			if(a[k]!=-1)
				a[k]++;
		}

	}
	for(int i=0;i<10000;i++)
	{
		if(a[i]>0)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
