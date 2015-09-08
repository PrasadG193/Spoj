#include<stdio.h>
#include<string.h>
#include <algorithm>
using namespace std;

char a[1000010];
long int i1,j1;

char inc(int i)
{
	if(i<0)
		return a[0];
	if(a[i]<'9')
	{
		a[i]++;
		return a[i];
	}
	else
	{	
		a[i-1]=inc(i-1);
		a[i]='0';
		return a[i];
	}
}

int main()
{
	long int i,j,l,mid;
	int f,t;
	char f1;
	scanf("%d",&t);
	while(t--)
	{
		f=0;
		f1='1';
		scanf("%s",a);
		l=strlen(a);
		if(l==1 && a[0]<'9')
		{
			printf("%c\n",a[0]+1);
			continue;
		}
		i1=l/2-1;
		j1=(l-i1-2)+1;
		mid=j1-1;

		i=0;j=l-1;
		while(i<j)
		{
			if(a[i]!=a[j])
				break;
			if(a[i]!='9')
				f1='0';
			i++;
			j--;
		}
		if(i>=j)
			f=1;
		if(f==1 && f1=='1' && a[mid]=='9')
		{
			printf("1");
			for(int k=0;k<l-1;k++)
				printf("0");
			printf("1\n");
		}
		else
		{
			if(f==1)
				a[mid]=inc(mid);

		i=i1;j=j1;
		while(i>=0 && j<l)
		{
			if(a[i]>a[j] && f==0)
			{
				a[j]=a[i];
				f=1;
			}
			else if(f==1)
			{
				a[j]=a[i];
			}
			else if(a[i]<a[j])
			{
				a[mid]=inc(mid);
				i=i1+1;j=j1-1;
				f=1;
			}
			i--;j++;
				
		}
		printf("%s\n",a);
		}
	}
	return 0;
}
