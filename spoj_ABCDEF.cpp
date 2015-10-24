/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj_ABCDEF 						*
* Category : binary search					*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
#define gc getchar_unlocked

int main()
{
	int n,a[110],i,j,k;
	vector<int> lhs,rhs;
	long long int res=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)		
	{
		lhs.push_back(a[i]*a[j]+a[k]);
		if(a[k]!=0)
		rhs.push_back((a[i]+a[j])*a[k]);
	}
	sort(lhs.begin(),lhs.end());
	sort(rhs.begin(),rhs.end());

	/*for(i=0;i<lhs.size();i++)
		printf("%d ",lhs[i]);
	printf("\n");
	for(i=0;i<rhs.size();i++)
		printf("%d ",rhs[i]);
	printf("\n");
	*/
	for(i=0;i<lhs.size();i++)
	{
		j=lower_bound(rhs.begin(),rhs.end(),lhs[i])-rhs.begin();
		k=upper_bound(rhs.begin(),rhs.end(),lhs[i])-rhs.begin();
		res+=(k-j);
	}
	printf("%lld\n",res);
	return 0;
}
