/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad J Ghangal						
 Title : SPOJ M3TILE 
 Category : DP					
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>

int main()
{
	long long int a[35];
	int n,i;
	
	//precomputation
	memset(a,0,sizeof(a));
	a[0]=1;
	a[1]=0;
	a[2]=3;
	a[3]=0;
	for(i=4;i<=30;i+=2)
	{
		a[i]=4*a[i-2]-a[i-4];
	}

	while(1)
	{
		scanf("%d",&n);
		if(n==-1)
			break;
		printf("%lld\n",a[n]);
	}
	return 0;
}
