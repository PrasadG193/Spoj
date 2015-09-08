/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
* Author : Prasad J Ghangal					*
* Title : Spoj_Seinfield 					*
* Algorithm : -							*
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

int main()
{
	char a[2002];int l,c;

	scanf("%s",a);
	while(a[0]!='-')
	{
		int cnt=0;
		c++;
		int cnt1=0;
		stack<char> s;
		l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if(a[i]=='{')
				s.push(a[i]);
			
			else if(s.empty())
			{
				s.push(a[i]);
				cnt++;
			}
			else
			{
				s.pop();
			}

		}
		while(!s.empty())
		{
			s.pop();
			cnt1++;
		}
		cnt=cnt+cnt1/2;
		printf("%d. %d\n",c,cnt);
		scanf("%s",a);
	}
	return 0;
}

