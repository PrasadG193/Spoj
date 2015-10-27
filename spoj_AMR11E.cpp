/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj_AMR11E		 				*
* Category : Math						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include<iostream>
#include <string.h>
#include <vector>
#include <math.h>
using namespace std;
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
	char a[1000];
	int t=fin(),n,i,j,count;
	long int temp=44;
	vector<int> prime,ans;
	//sieve
	memset(a,'0',sizeof(a));
	for(i=2;i<35;i++)
	for(j=i*i;j<1000;j+=i)
		a[j]='1';
	for(i=2;i<1000;i++)
	{
		if(a[i]=='0')
			prime.push_back(i);
	}

	//precomputation
	ans.push_back(30);
	ans.push_back(42);
	for(i=0;i<=1000-2;)
	{
		j=0;
		count=0;
		while(1)
		{
			if(j>=prime.size() || prime[j] > temp)
				break;
			if(temp%prime[j] == 0)
				++count;
			if(count>=3)
				break;
			++j;
		}
		if(count>=3)
		{
			ans.push_back(temp);
			i++;
		}
		++temp;
	
	}

	while(t--)
	{
		n=fin();
		printf("%d\n",ans[n-1]);
	}

	return 0;
}
