/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked

int main()
{
	double a,b;
	double sum;
	while(1)
	{
		scanf("%lf %lf",&a,&b);
		if(a==-1.0 && b==-1.0)
			break;
		sum=a+b;
		a=max(a,b);
		b=sum-a;
		printf("%.0lf\n",ceil(a/(b+1)));

	}
	return 0;
}
