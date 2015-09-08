/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
	int t,n,k,i,b,count,diff;
	vector<int> v1;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		v1.push_back(b);
	}
	sort(v1.begin(),v1.end());
	i=0;
	int j=n-1;
	count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			diff=abs(v1[i]-v1[j]);
			if(diff==k)
			{
				count++;
			}
			else if(diff>k)
				break;
		}
	}
	printf("%d\n",count);
	return 0;
}
