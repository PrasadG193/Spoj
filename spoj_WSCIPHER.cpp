/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#define gc getchar_unlocked
using namespace std;

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

struct abc
{
	char s;
	int index;
};


bool comp(abc x,abc y)
{
	return x.index<y.index;
}

int main()
{
	int t,k1,k2,k3,i;
	int len[3][100],l[3];
	vector<abc> v1,v2,v3;
	abc tmp;
	char a[100];
	while(1)
	{
		k1=fin();
		k2=fin();
		k3=fin();
		if(k1==0 || k2==0 || k3==0)
			break;
		scanf("%s",a);
		l[0]=l[1]=l[2]=0;
		for(i=0;i<strlen(a);i++)
		{
			tmp.s=a[i];
			tmp.index=i;
			if(a[i] >='a' && a[i] <='i')
			{
				v1.push_back(tmp);
				len[0][l[0]]=i;
				l[0]++;
			}
			else if(a[i]>='j' && a[i]<='r')
			{
				v2.push_back(tmp);
				len[1][l[1]]=i;
				l[1]++;
			}
			else
			{
				v3.push_back(tmp);
				len[2][l[2]]=i;
				l[2]++;
			}
		}
		for(i=0;i<l[0];i++)
		{
			v1[i].index=len[0][(i+k1)%l[0]];
		}

		for(i=0;i<l[1];i++)
		{
			v2[i].index=len[1][(i+k2)%l[1]];
			v1.push_back(v2[i]);
		}
		for(i=0;i<l[2];i++)
		{
			v3[i].index=len[2][(i+k3)%l[2]];
			v1.push_back(v3[i]);
		}
		sort(v1.begin(),v1.end(),comp);
		for(i=0;i<v1.size();i++)
			printf("%c",v1[i].s);
		printf("\n");


		v1.clear();
		v2.clear();
		v3.clear();

	}

	return 0;
}

