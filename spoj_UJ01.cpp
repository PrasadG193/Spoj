/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-UJ01		 				*
* Category : math						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

long long int lcm(long long int a,long long int b)
{
	return (a*b)/__gcd(a,b);
}

int main()
{
	int t;
	int a,b,i,j,k;
	vector<long long int> v1;
	long long int n,p,a1,b1;
	scanf("%d",&t);
	while(t--)
	{
		a1=b1=0;
		scanf("%d%d%lld",&a,&b,&n);
		p=lcm(a,b);n--;
		j=min(a,b);a1=j;k=(a+b)-a1;b1=k;
		while(a1<=p && b1<=p)
		{
			if(a1<b1)
			{
				v1.push_back(a1);
				a1+=j;
			}
			else if(a1>b1)
			{
				v1.push_back(b1);
				b1+=k;
			}
			else
			{
				v1.push_back(a1);
				a1+=j;b1+=k;
			}
		}
//		v1.push_back(p);
//		sort(v1.begin(),v1.end());
		i=v1.size();
		printf("%lld\n",p*(n/i)+v1[n%i]);
		v1.clear();

	}
	return 0;
}
