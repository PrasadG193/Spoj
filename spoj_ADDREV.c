#include<stdio.h>
#include<string.h>

int rev(int a)
{
	int res=0;
	while(a)
	{
		res=res*10+a%10;
		a=a/10;
	}
	return res;
}


int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",rev(rev(a)+rev(b)));

	}
	return 0;
}
