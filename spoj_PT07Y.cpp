/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#define for(i,n) for(i=0;i<n;i++)
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

int a[10010];

int find(int x)
{
	while(a[x]!=x)
	{
		a[x]=a[a[x]];
		x=a[x];
	}
	return x;
		
}

int main()
{
	int n,m,i,x,y,r1,r2;
	char f;
	for(i,10010)
		a[i]=i;
	n=fin();m=fin();
	if(m!=(n-1))
	{
		printf("NO\n");
	
	}
	else if(n==1 && m==0)
		printf("YES\n");
	else
	{
	for(i,m)
	{

		f='0';
		x=fin();
		y=fin();
		r1=find(x);
		r2=find(y);
		if(r1==r2)
		{
			f='1';
			printf("NO\n");
			break;
		}
		else if(r1<r2)
		{
			a[r2]=r1;
		}
		else
			a[r1]=r2;
	}
	if(f=='0')
		printf("YES\n");
	}
	return 0;
}
