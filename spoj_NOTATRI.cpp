/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj_NOTATRI		 				*
* Category : binary search					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
int a[2010];
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


int binarysearch(int k,int n)
{
	int l=0,h=n-1,mid;
	while(l!=h)
	{
		mid=(l+h)/2;
		if(a[mid]<=k)
		{
			l=mid+1;
		}
		else
			h=mid;
	}
	return l;
}

int main()
{
	int n,i,j;
	long ans;
	vector<int> v;
	while(1)
	{

		n=fin();
		if(n==0)
			break;
		ans=0;
		v.clear();
		for(i=0;i<n;i++)
			a[i]=fin();
		sort(a,a+n);
		for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			v.push_back(a[i]+a[j]);
		}
		for(i=0;i<v.size();i++)
		{
			if(v[i]<a[n-1])
				ans+=(n-binarysearch(v[i],n));

		}
		printf("%ld\n",ans);

	}
	return 0;
}
