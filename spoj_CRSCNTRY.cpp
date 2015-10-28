/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : pg_193						
 Title : Spoj_CRSCNTRY 				
 Category : DP-LCS						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <algorithm>
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

int lcs(int s1[],int s2[],int l1,int l2)
{
	int a[l1+1][l2+1];
	for(int i=0;i<=l1;i++)
	for(int j=0;j<=l2;j++)
	{
		if(i==0 || j==0)
			a[i][j]=0;
		else if(s1[i-1]==s2[j-1])
			a[i][j]=1+a[i-1][j-1];
		else
			a[i][j]=max(a[i-1][j],a[i][j-1]);

	}
	return a[l1][l2];
}



int main()
{
	int t=fin(),i,l1,l2,max1;
	int a[2010],b[2010];
	while(t--)
	{
		max1=0;
		i=0;
		while(1)
		{
			a[i]=fin();
			if(a[i]==0)
				break;
			++i;
		}
		l1=i;

		while(1)
		{
			i=0;
			while(1)
			{
				b[i]=fin();
				if(b[i]==0)
					break;
				++i;
			}
			l2=i;
			if(l2==0 && b[0]==0)
				break;
			max1=max(max1,lcs(a,b,l1,l2));
		}
		printf("%d\n",max1);

	}
	return 0;
}
