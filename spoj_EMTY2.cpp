/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : spoj_EMTY2		 				*
* Category : adhoc						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
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

int main()
{
	int t=fin(), r,t1=0,l,l1;
	char a[120001];
	vector<char> v;
	while(t--)
	{
		++t1;
		scanf("%s",a);
		
		int l = strlen(a);
		for(int i=0;i<l;i++)
		{
			v.push_back(a[i]);
			l1=v.size();
			if(l1>=3)
			{
				if(v[l1-1]=='0' && v[l1-2]=='0' && v[l1-3]=='1')
				{
					v.pop_back();
					v.pop_back();
					v.pop_back();
				}
			}
		}
		if(v.size()==0)
			printf("Case %d: yes\n",t1);
		else
			printf("Case %d: no\n",t1);
		v.clear();
	}

	return 0;
}
