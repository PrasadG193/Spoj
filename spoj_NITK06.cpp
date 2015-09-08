/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Modify Sequence	 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
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
	int t,n,i,j,tmp,cnt=0;
	int a[10000];
	char c;
	t=fin();
	while(t--)
	{
		c='0';
		n=fin();
		for(i=0;i<n;i++)
		{
			a[i]=fin();
		}
		for(i=0;i<n-1;i++)
		{
			a[i+1]=a[i+1]-a[i];
			if(a[i+1]<0)
			{
				c='1';
				break;
			}
		}
	
		if(c=='1' || a[n-1]!=0)
			printf("NO\n");
		else
			printf("YES\n");

	}
	return 0;
}
