/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-Pizza		 				*
* Category : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <math.h>
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

	int n;
	float s1,s2,s3;
	s1=s2=s3=0;
	long long int sum=0;
	char a[4];
	n=fin();
	while(n--)
	{
		scanf("%s",a);
		if(strcmp(a,"1/4")==0)
			s1++;
		else if(strcmp(a,"1/2")==0)
			s2++;
		else
			s3++;
	}
	sum=s3;
	s1=s1-s3;
	while(s1>0 && s2>0)
	{
		sum+=1;
		s1-=2;
		s2-=1;
	}
	if(s2>0)
		sum+=ceil(s2/2);
	if(s1>0)
		sum+=ceil(s1/4);
	printf("%lld\n",sum+1);
	return 0;
}
