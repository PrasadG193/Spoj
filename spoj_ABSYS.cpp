/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : pg_193						*
* Title :  				*
* Category : 						*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#define gc getchar_unlocked


int main()
{
	char a[100],c;
	int t,i,n[3];
	scanf("%d",&t);
	while(t--)
	{
		n[0]=n[2]=n[1]=0;
		for(i=1;i<=5;i++)
		{
			scanf("%s",a);
			if(i%2)
			{
				for(int j=0;j<strlen(a);j++)
				{
					if(a[j]=='m')
					{
						n[i/2]=-1;
						break;
					}
					else
					{
						n[i/2]=n[i/2]*10+(a[j]-'0');
					}
				}
			}
		}
		scanf("%c",&c);
		if(n[0]==-1)
		{
			n[0]=n[2]-n[1];
		}
		else if(n[1]==-1)
			n[1]=n[2]-n[0];
		else
			n[2]=n[0]+n[1];

		for(i=1;i<=5;i++)
		{
			if(i==2)
				printf(" + ");
			else if(i==4)
				printf(" = ");
			else
				printf("%d",n[i/2]);
		}
		printf("\n");

	}
	return 0;
}
