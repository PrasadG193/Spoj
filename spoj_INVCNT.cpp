/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
 Title : Spoj-Counting Inversions
 Category : sort						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <bits/stdc++.h>
using namespace std;

int BIT[10000010],a[200010],max1;


int read(int index)
{
	int sum=0;
	while(index)
	{
		sum+=BIT[index];
		index-=(index & -index);	//parent
	}
	return sum;
}

void update(int index,int val)
{
	while(index<=max1+1)
	{
		BIT[index]+=val;
		index+=(index & -index);
	}
}


int main()
{
	int t,n;
	long long int ans;
	scanf("%d",&t);
	while(t--)
	{
		max1=ans=0;
		memset(BIT,0,sizeof(BIT));
		scanf("%d",&n);
		for(int i=0;i<n;++i)
		{
			scanf("%d",&a[i]);
			max1=max(max1,a[i]);
		}
		for(int i=n-1;i>=0;--i)
		{
			ans+=read(a[i]);
			update(a[i]+1,1);
		}
		printf("%lld\n",ans);

	}
	return 0;
}
