/*Author: Prasad Ghangal
 *Title: SPOJ-PRIME1- Prime Generator */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define gc getchar_unlocked
int get()
{
	register char c;
	c=gc();
	while(c<'0'||c>'9')
		c=gc();
	int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+(c-48);
		c=gc();
	}
	return ret;
}

char prime[31622];
int count[4000];

int main()
{
//	memset(prime,'0',sizeof(prime));
	int t,n,m,i,j,cnt=0,flag;
	prime[0]=prime[1]='1';
	for(i=2;i<=31622;i++)
		if(prime[i]!='1')
		for(j=i*i;j<31622;j=j+i)
			prime[j]='1';
	for(i=0;i<=31622;i++)
		if(prime[i]!='1'){
			count[cnt]=i;
			cnt++;
		}
	t=get();
	while(t--)
	{
		n=get();
		m=get();
		for(i=n;i<=m;i++)
		{

			flag=1;
			{
				if(i==1||i==4)
					continue;
				if(i<=5)
				{
					printf("%d\n",i);
					continue;
				}
				for(j=0;j<cnt;j++)
					if(count[j]>sqrt(i))
						break;
					else
						if(i%count[j]==0)
						{
							flag=0;
							break;
						}
			}
			if(flag)
				printf("%d\n",i);
		}
		printf("\n");
	}
	return 0;
}
