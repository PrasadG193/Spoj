/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-EKO		 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
#define gc getchar_unlocked

long long int fin()
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

bool comp(long int a,long int b)
{
	return a>b;
}

long long int a[1000010] ;

int main()
{

	long long int n,m,i,ans,sum=0;
	float req=0;
	ans=0;
	req=m;
	n=fin();
	m=fin();
	req=m;
	for(i=0;i<n;i++)
		a[i]=fin();
	sort(a,a+n,comp);
	for(i=0;i<n-1;i++)
	{
		sum=(a[i]-a[i+1])*(i+1);
		if(req>sum)
			req-=sum;
		else
		{
			req=ceil((req)/(i+1));
			ans=a[i]-req;
			break;
		}
	}
	if(i>=n-1)
	{
		req=ceil((req)/(n));
		ans=a[n-1]-req;
	}
	printf("%lld\n",ans);

		
	return 0;
}
