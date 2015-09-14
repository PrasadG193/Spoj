/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal										*
* Title : Spoj- Play with Dates									*
* Algorithm : AdHoc													*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <iostream>
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

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char days[7][30]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main()
{

	int t,a[12],i,count;
	int d,m,y,leap,dd,md,yd,total;
	t=fin();
	while(t--)
	{
		total=0;
		count=0;
		d=fin();
		m=fin();
		y=fin();
		dd=d;
		total=dd;
		total=d;
		m--;
		for(i=1;i<=m;i++)
		{
			total+=month[i]%7;
		}
		if(m>=2 && y%4==0)
		{
			total+=1;
			if(y%100==0)
				total-=1;
			if(y%400==0)
				total+=1;
		}
		y=y-1;
		leap=(y)/4;
		leap-=y/100;
		leap+=y/400;
		total+=(leap*2 + (y-leap))%7;
		total=(total)%7;
		printf("%s\n",days[(total)]);
	}


	return 0;
}
