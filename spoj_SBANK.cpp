/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
class abc
{
	public:
	char a[35];
	abc(char a1[35])
	{
		strcpy(a,a1);
	}
};

bool comp(abc x,abc y)
{
	int i=0;
	while(i<35)
	{
		if(x.a[i]==y.a[i])
			i++;
		else if(x.a[i]<y.a[i])
			return true;
		else
			return false;
	}

	return false;
}


int main()
{
	int t,n,b[6];
	char c[35];
	vector<abc> v1;
	t=fin();
	while(t--)
	{
		n=fin();
		for(int i=0;i<n;i++)
		{
			cin.getline(c,35);
			v1.push_back(abc(c));
		}
		sort(v1.begin(),v1.end(),comp);
		int cnt=1;
		for(int i=0;i<n-1;i++)
		{
			if(strcmp(v1[i].a,v1[i+1].a)==0)
				cnt++;
			else
			{
				printf("%s%d\n",v1[i].a,cnt);
				cnt=1;
			}
		}
		printf("%s%d\n\n",v1[n-1].a,cnt);
		v1.clear();

	}
	return 0;
}
