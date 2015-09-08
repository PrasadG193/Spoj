#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1;
	int n,tmp,cnt,i,flag;
	cin>>n;
	while(n)
	{
		cnt=1;
		s1.push(0);
		flag=0;
		for(i=0;i<n;i++)
		{
		
			while((cnt==s1.top()))
			{
				cnt++;
				s1.pop();
			}
			cin>>tmp;
			if(tmp==cnt)
			{	//cout<<cnt<<" ";
					cnt++;
			}
			else if((tmp>s1.top())&&(s1.top()!=0)){
				flag=1;
			
			}
			else if(tmp>cnt)
				s1.push(tmp);
		}
	//	while((!s1.empty()))
//		{	
		//	cout<<cnt<<" ";
//			if(s1.top()==cnt)
//				cnt++;
//			s1.pop();
//		}
//		cnt--;
		if(flag==0)
			cout<<"yes\n";
		else
			cout<<"no\n";
		cin>>n;
	}
	return 0;
}
