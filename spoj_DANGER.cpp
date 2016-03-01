/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **
 Author : Prasad Ghangal					
 Title : Spoj-Danger 				
 Category : Math						
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <bits/stdc++.h>
using namespace std;

int main()
{	
	char s[5];
	long long n,n1;
	double ans;
	while(1)
	{
		n=0;
		scanf("%s",s);
		if(strcmp(s,"00e0")==0)
			break;
		n=s[0]-'0';
		n=n*10+(s[1]-'0');
		n=n*pow(10,s[3]-'0');
		n1=n;
//		cout<<n<<endl;
		ans=log(n)/log(2);
		n=(long long)(ans);
		if(n==ans)
		{
			printf("1\n");
			continue;
		}
		n=pow(2,n);
		n=n1-n;
		printf("%lld\n",2*((n+1)-1)+1);
		
		
	}

	return 0;
}
