/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : pg_193						
 Title : Spoj_DIVFACT 				
 Category : math						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define N 1000000007

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
	char a[100010];
	vector<int> prime;
	long long int i,j,t,n,count,total,total1,tmp;
	char f='0';
	//sieve
	memset(a,'0',sizeof(a));
//	prime.push_back(2);
	for(i=2;i<320;++i)
	for(j=i*i;j<=100000;j+=i)
		a[j]='1';
	
	for(j=2;j<=100000;++j)
		if(a[j]=='0')
			prime.push_back(j);
	t=fin();
	while(t--)
	{
		total=1;
		n=fin();
				
		total=1;
//		if(a[n]=='0')
//		{
//			--n;
//			f='1';
//		}
		for(i=0;i<prime.size();++i)
		{
//			cout<<tmp<<" "<<prime[i]<<"\n";
			count=0;
			tmp=prime[i];
			if(tmp > n)
				break;
			while(n>=tmp)
			{
				count+=(n/tmp);
				tmp=tmp*prime[i];
			}
			
		//	count=log(n)/log(prime[i]);
		//	cout<<prime[i]<<" "<<count<<"\n";
			total=((total)*((count+1)))%N;
		}
		printf("%lld\n",total%N);

	}

	return 0;
}
