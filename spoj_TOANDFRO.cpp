/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-To and Fro  	 				*
* Category : Strings						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <math.h>
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
	int c,l,i,r,flag=0;;
	char a[210],b[210][21];
	while(1)
	{
		c=fin();
		if(c==0)
			break;
		scanf("%s",a);
		l=strlen(a);
		r=ceil(l/c);
		int ind=-1,k=0;
		for(int i=0;i<r;i++)
		{
			if(ind>=c-1)
			{
				flag=1;
				ind--;
			}
			else
			{
				flag=0;
				ind++;
			}
			for(int j=0;j<c;j++)
			{
				b[i][ind]=a[k];
				k++;
				if(flag==1)
					ind--;
				else
					ind++;
			}
		}

		for(int i=0;i<c;i++)
			for(int j=0;j<r;j++)
				printf("%c",b[j][i]);
		printf("\n");
	}
	return 0;
}
