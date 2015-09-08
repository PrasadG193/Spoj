/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj-ACS 						*
* Category : ad-hoc						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked


int r[1235],c[5679];

int main()
{
	int t,i,tmp,m;
	char ch;int x,y;
	for(i=0;i<1235;i++)
		r[i]=i;

	for(i=0;i<5679;i++)
		c[i]=i;

	while(scanf(" %c",&ch)!=EOF)
	{
		if(ch=='R')
		{

			scanf("%d%d",&x,&y);
			tmp=r[x-1];
			r[x-1]=r[y-1];
			r[y-1]=tmp;
		}
		else if(ch=='C')
		{
			scanf("%d%d",&x,&y);
			tmp=c[x-1];
			c[x-1]=c[y-1];
			c[y-1]=tmp;
		}

		else if(ch=='Q')
		{
			scanf("%d%d",&x,&y);
			printf("%d\n",r[x-1]*5678+c[y-1]+1);
		}

		else 
		{
			scanf("%d",&m);
			x=(m-1)/5678;
			y=(m-1)%5678;
			for(i=0;i<1235;i++)
			{
				if(r[i]==x)
					printf("%d ",i+1);
			}
			for(i=0;i<5679;i++)
			{
				if(c[i]==y)
					printf("%d\n",i+1);
			}


		}

	}
	return 0;
}
