/*Author: Prasad Ghangal
 *Title: Spoj-Philosophers Stone */

#include<stdio.h>
#include<string.h>
#include<algorithm>
#define gc getchar_unlocked
using namespace std;
int a[100][100],b[100][100],m,n;

int fin()
{
	register char c;
	c=gc();
	while(c<'0'||c>'9')
		c=gc();
	int res=0;
	while(c>='0'&&c<='9')
	{
		res=res*10+(c-48);
		c=gc();
	}
	return res;
}

int find(int i,int j)
{
	
	
	if(j==0)
	{
		return max(b[i-1][j],b[i-1][j+1]);
	}
	else if(j==n-1)
		return max(b[i-1][j],b[i-1][j-1]);
	else
	{
		return max(b[i-1][j-1],max(b[i-1][j],b[i-1][j+1]));
	}

}

int main()
{
	int t,max1,i,j;
	memset(b,0,sizeof(b));
	t=fin();
	while(t--)
	{
		m=fin();
		n=fin();
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				a[i][j]=fin();
			}
		for(i=0;i<n;i++)
			b[0][i]=a[0][i];
		for(i=1;i<m;i++)
		for(j=0;j<n;j++)
		{
			b[i][j]=find(i,j)+a[i][j];
		}
		max1=0;
		for(i=0;i<n;i++)
		{
			if(max1<b[m-1][i])
				max1=b[m-1][i];
		}
		printf("%d\n",max1);
	}
	return 0;
}
