/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
 Title : Spoj-MAIN8_C 				
 Category : Binary Search						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

long int fin()
{
	long int res=0;
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
	long int t,n,k,a[50010],l,h,mid;
	char f;
	t=fin();
	while(t--)
	{

		n=fin();k=fin();
		for(int i=0;i<n;++i)
			a[i]=fin();
		sort(a,a+n);
		l=1;h=a[n-1]+1;
		while(l<h)
		{
			mid=(l+h)/2;
			f='0';
			long int tmp=k;
			for(int j=n-1;j>=0;--j)
			{
				tmp-=a[j]/mid;
				if(tmp<=0)
				{
					f='1';
					break;
				}
			}
			if(f=='0')
				h=mid;
			else
				l=mid+1;
		}
		printf("%ld\n",l-1);	

	}
	return 0;
}
