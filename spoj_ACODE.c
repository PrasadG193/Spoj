/*Author: Prasad Ghangal
 * Title: Spoj-Alphacode
 * Algo: DP
 * ***************************************************/

#include<stdio.h>
#include<string.h>

char a[5001];

int dp()
{
	int mem[5001];
	int x,y,i,l;
	l=strlen(a);
	mem[0]=1;
	y=(a[0]-48)*10+(a[1]-48);
	if(y>26)
		mem[1]=1;
	else if(a[1]=='0')
		mem[1]=1;
	else
		mem[1]=2;
	for(i=2;i<l;i++)
	{
		y=(a[i-1]-48)*10+(a[i]-48);

		if((a[i]=='0'))
			mem[i]=mem[i-2];
		else if((y>26)||(y<10))
			mem[i]=mem[i-1];
		else 
			mem[i]=mem[i-2]+mem[i-1];
	}
	return mem[l-1];
}
int main()
{
	while(1)
	{
		scanf("%s",a);
		if(a[0]=='0')
			break;
		else
			printf("%d\n",dp());
	}

	return 0;

}
