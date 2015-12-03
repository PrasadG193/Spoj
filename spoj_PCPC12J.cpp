/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
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
	map<int,int> hash;
	int t,n,a,f,d;
	t=fin();
	while(t--)
	{
		f=d=0;
		hash.clear();
		n=fin();
		for(int i=0;i<n;++i)
		{
			a=fin();
			++hash[a];
		}
		for(map<int,int>::iterator it=hash.begin();it!=hash.end();++it)
		{
			//cout<<it->first<<" "<<it->second<<"\n";
			if(it->second % it->first == 0)
			{
				if(it->second > f)
				{
					d=it->first;
					f=it->second;
				}
				else if(it->second == f)
				{
					if(it->first<d)
						d=it->first;
				}
			}
		}
		if(d)
			printf("%d\n",d);
		else
			printf("-1\n");
	}
	return 0;
}
