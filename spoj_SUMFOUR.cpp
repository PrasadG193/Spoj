/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj-SUMFOUR		 				*
* Category : binary search					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
#define gc getchar_unlocked

long int a[4010],b[4010],c[4010],d[4010];
vector<long int> lhs,rhs;


int main()
{
	int n,i,j;
	long int ans=0;
	long int x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%ld%ld%ld%ld",&a[i],&b[i],&c[i],&d[i]);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		lhs.push_back(a[i]+b[j]);	
		rhs.push_back(c[i]+d[j]);	
	}
	sort(rhs.begin(),rhs.end());
	for(long int z=0;z<lhs.size();++z)
	{
		x=lower_bound(rhs.begin(),rhs.end(),-1*lhs[z])-rhs.begin();
		y=upper_bound(rhs.begin(),rhs.end(),-1*lhs[z])-rhs.begin();
		ans+=(y-x);
	}
	printf("%ld\n",ans);

	return 0;
}
