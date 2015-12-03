/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : pg_193						
 Title :  				
 Category : 						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <bits/stdc++.h>
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
	int t,n,a;
	bool f;
	t=fin();
	while(t--)
	{
		f=false;
		n=fin();
		for (int i = 0; i < n; ++i) 
		{
			a=fin();
			if(a>i)
			{
				f=true;
			}
		}
		if(f)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
