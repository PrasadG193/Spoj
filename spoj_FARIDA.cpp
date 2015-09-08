/*Author: Prasad Ghangal
 * Title: Spoj-Princess Farida
 * */
#include<stdio.h>
#include<algorithm>
#include<string.h>
#define gc getchar_unlocked
using namespace std;
long long int a[1001],b[1001],n;

long long int get()
{
	register char c=gc();
	long long int res=0;
	while(c<'0' || c>'9')
		c=gc();
	while(c>='0' && c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

long long int dp()
{
	a[0]=b[0];
	a[1]=max(b[1],b[0]);
	a[2]=max(b[2]+a[2-2],a[2-1]);
	for(int i=3;i<n;i++)
	{
		a[i]=max(b[i]+a[i-2],a[i-1]);
	}
	return a[n-1];
}

int main()
{
	int t,c=0;
//	memset(a,0,sizeof(int));
	t=get();
	while(t--)
	{
		c++;
		n=get();
		for(int i=0;i<n;i++)
		{
			b[i]=get();
		}
		printf("Case %d: %lld\n",c,dp());
	}
	return 0;
}
