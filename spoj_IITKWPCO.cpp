/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Create Collections 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include<string.h>
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

int a[2000001];

int main()
{
	int t,count;
	int n,i,j,tmp;
	int b[110];
	t=fin();
	while(t--)
	{
		count=0;
		memset(a,0,sizeof(a));
		n=fin();
		for(i=0;i<n;i++)
		{
			b[i]=fin();
			a[b[i]]++;
		}
		sort(b,b+n);
		for(i=0;i<n;i++)
		{
			if(a[b[i]]==0)
				continue;
			if(a[2*b[i]]!=0)
			{
				count++;
				a[b[i]]--;
				a[b[i]*2]--;
			}
		}
		printf("%d\n",count);
	}

	return 0;
}
