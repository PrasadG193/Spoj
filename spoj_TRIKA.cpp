/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
 Title : Spoj TRIKA 				
 Category : DP						
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
	int n=fin(),m=fin();
	int x=fin(),y=fin();
	int a[21][21];
	for(int i=0;i<n;++i)
	for(int j=0;j<m;++j)
		a[i][j]=fin();
	
	for(int i=x;i<n;++i)
		a[i][y-1]=a[i-1][y-1]-a[i][y-1];

	for(int i=y;i<m;++i)
		a[x-1][i]=a[x-1][i-1]-a[x-1][i];
	
	for(int i=x;i<n;++i)
	for(int j=y;j<m;++j)
		a[i][j]=max(a[i-1][j],a[i][j-1])-a[i][j];

	if(a[n-1][m-1] < 0)
		printf("N\n");
	else
		printf("Y %d\n",a[n-1][m-1]);


	return 0;
}
