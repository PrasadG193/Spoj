
#include <stdio.h>
#include <algorithm>
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

int a[100010];
long long sum[100020];
int n;

long long int dp()
{
	for(int k=n-3;k>=1;k--)
	{
		sum[k]= max(a[k]+sum[(k+2)], max(a[k]+a[k+1]+sum[(k+4)], a[k]+a[k+1]+a[k+2]+sum[(k+6)]));
	}
	return sum[1];
}


int main()
{
	int t=fin(),k,i;
	long int s;
	while(t--)
	{
		memset(sum,0,sizeof(sum));
		n=fin();
		s=0;
		for(i=1;i<=n;i++)
			a[i]=fin();
		if(n>3)
		{
			sum[n]=a[n];
			sum[n-1]=sum[n]+a[n-1];
			sum[n-2]=sum[n-1]+a[n-2];
		printf("%lld\n",dp());
		}
		else
		{
			for(i=1;i<=n;i++)
				s+=a[i];
			printf("%ld\n",s);
		}
	}

	return 0;
}
