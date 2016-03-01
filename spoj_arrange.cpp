/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
Author : Prasad Ghangal					
Title : Spoj ARRANGE 				
Category : greedy				
Algo used : Sorting
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
long int finl()
{
    long int res=0;
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

long int a[100010];
int n;

void _print(int f)
{
    for(int i=n-1;i>=f;--i)
	printf("%ld ",a[i]);
    printf("\n");
}

int main()
{
    int t=fin();
    int count=0;
    while(t--)
    {
	count=0;
	n=fin();
	for(int i=0;i<n;++i)
	{
	    a[i]=finl();
	    if(a[i]==1)
		++count;
	}
	sort(a,a+n);

	if(a[0]==1)
	{
	    for(int i=0;i<count;++i)
		printf("1 ");
	    if(n==count+2)
	    {
		if(a[count]==2 && a[count+1]==3)
		{
		    printf("%ld %ld\n",a[count],a[count+1]);
		    continue;
		}
	    }
	    _print(count);
	}
	else if(n==2 && a[0]<3)
	    printf("%ld %ld\n",a[0],a[1]);
	else
	    _print(0);
	    
    }
    return 0;
}
