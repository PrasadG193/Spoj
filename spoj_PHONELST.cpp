/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : pg_193						
 Title : Spoj-PHONELST 				
 Category : Sort						
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
	vector<string> v;
	string s;
	int t,n,i,f,count,j;
	t=fin();
	while(t--)
	{
		f=0;
		n=fin();
		for (i = 0;i < n; ++i) 
		{
			cin>>s;
			v.push_back(s);
		}
		sort(v.begin(),v.end());
		for (i = 0; i < n-1; ++i) 
		{
			count=0;
			for(int j=0;j<v[i].size();++j)
			{
				if(v[i][j]==v[i+1][j])
					++count;
			}
			if(count==v[i].size())
			{
				f=1;
				break;
			}
		}
		if(f==1)
			printf("NO\n");
		else
			printf("YES\n");
		v.clear();
	}
	return 0;
}
