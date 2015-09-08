#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int visited[100][100];
int dr[8]={-1,-1,1,1,0,0,-1,1};
int dc[8]={-1,1,-1,1,-1,1,0,0};
int c,r;
char a[100][100];
char str1[10]="ALLIZZWELL";

struct pos
{
	int row;
	int col;
	struct pos *next;
};

int backtrack(int cr,int cc,int index)
{
	int nr,nc,i;
	visited[cr][cc]=1;
//	printf("r=%d c=%d\n",r,c);
//	printf("currently in (%d%d) val=%c str1=%c visited=%d\n",cr,cc,a[cr][cc],str1[index],visited[cr][cc]);
	if(index>9)
		return 1;
	for(i=0;i<8;i++)
	{
		nr=cr+dr[i];
		nc=cc+dc[i];
//		printf("nr=%d nc=%d a[nr][nc]=%c\n",nr,nc,a[nr][nc]);
		if(nr<0||nc<0||nr>r||nc>c)
			continue;
		if(visited[nr][nc])
			continue;
		if(!(a[nr][nc]==str1[index]))
			continue;
		if(backtrack(nr,nc,index+1))
		{
//			printf("inner\n");	
			return 1;
		}
	}
	visited[cr][cc]=0;
	return 0;
	
}

int main()
{
	int t,m,i,j,res,cr,cc;
	scanf("%d",&t);
	char tmp;
	while(t--)
	{

	memset(visited,0,sizeof(int)*10000);
		scanf("%d%d",&r,&c);
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf(" %c",&a[i][j]);
			}
		}
/*		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%c ",a[i][j]);
			}
			printf("\n");
		}*/
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;i++)
			if(a[i][j]=='A')
			{
				push(i,j);
			//	break;
			}
		}
		while(start!=NULL)
		{
			m=pop();
			printf("row=%d col=%d\n",m->row,m->col);		
		}
		r--;c--;
		if(backtrack(0,cr,1))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
