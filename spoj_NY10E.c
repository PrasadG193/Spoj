/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-NY10E		 				*
* Category : DP							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
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
	int i,j,t,p,n;
	unsigned long long dp[10]={10,9,8,7,6,5,4,3,2,1},ans[70],temp,sum,next;		t=fin();
	memset(ans,0,sizeof(ans));
	ans[1]=10;
	ans[2]=55;

	for(i=3;i<=64;i++)
	{
		sum=temp=ans[i-1];
		temp-=dp[0];
		sum+=temp;
		next=temp;
		for(j=1;j<10;j++)
		{
			temp=temp-dp[j];
			dp[j]=next;
			next=temp;
			sum=sum+temp;
		}
		ans[i]=sum;
		dp[0]=ans[i-1];
	}
/*	for(i=0;i<10;i++)
		printf("%llu\n",dp[i]);

	printf("%llu\n",ans[64]);
*/
	while(t--)
	{
		p=fin();n=fin();
		printf("%d %llu\n",p,ans[n]);		

	}

	return 0;
}
