/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : Spoj_SUBSUMS						*
* Category : Bitmask						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

vector<long int> lhs,rhs;
long int a[35];

void findsubs(int start,int n, int flag)
{
	int total=1<<n;
	long int sum,tmp,index;
	for(int i=0;i<total;i++)
	{
		index=start;
		sum=0;
		tmp=i;
		while(tmp)
		{
			if(1&tmp)
				sum+=a[index];
			tmp=tmp>>1;
			++index;
		}
		if(flag==0)
			lhs.push_back(sum);
		else
			rhs.push_back(sum);
	}
}


int main()
{
	int n,i,j;
	long int x,y;
	long long int ans=0;
	int x1,y1;
	scanf("%d%ld%ld",&n,&x,&y);
	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
	findsubs(0,n/2,0);
	if(n&1)
		findsubs(n/2,n/2+1,1);
	else
		findsubs(n/2,n/2,1);

	/*for(i=0;i<lhs.size();i++)
		printf("%ld ",lhs[i]);
	printf("\n");

	for(i=0;i<rhs.size();i++)
		printf("%ld ",rhs[i]);
	printf("\n");
	*/
	
	sort(rhs.begin(),rhs.end());
	for(i=0;i<lhs.size();++i)
	{
		x1=lower_bound(rhs.begin(),rhs.end(),x-lhs[i])-rhs.begin();
		y1=upper_bound(rhs.begin(),rhs.end(),y-lhs[i])-rhs.begin();
		ans+=(y1-x1);
	}
	printf("%lld\n",ans);
	return 0;
}
