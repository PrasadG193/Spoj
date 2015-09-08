/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title : SPOJ-CIRCLE_E 				*
* Category : Math						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <math.h>
#define gc getchar_unlocked

int main()
{
	int t;
	double a,b,c;
	double ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf",&a,&b,&c);
		ans=(a*b*c)/(a*b+b*c+a*c+2*sqrt(a*b*c*(a+b+c)));
		printf("%lf\n",ans);
	}	
	
	return 0;
}
