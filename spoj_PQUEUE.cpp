#include<iostream>
#include<deque>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

class pq
{
	public:
	int p;
	int ind;
	pq(int n1,int n2)
	{
		p=n1;
		ind=n2;
	}
};


bool cmp(pq a,pq b)
{
	return a.p<b.p;
}

int main()
{
	int t,n,i,tmp,count,max,k,k1;
	deque<pq> q;
	cin>>t;
	while(t--)
	{
		count=max=0;
		q.clear();
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>tmp;
			q.push_back(pq(tmp,i));
//			if(max<tmp)
//				max=tmp;
		}	
//		sort(q.begin(),q.end(),cmp);
//		for(i=0;i<n;i++)
//			cout<<q[i].p<<" "<<q[i].ind<<"\n";
		k1=q[k].p;
//		cout<<k1<<" "<<k;
		max=max_element(q.begin(),q.end(),cmp)->p;
//		cout<<q[k].p<<"\n";
		while(1){
//			if()
			
//			cout<<(q[0].p==k1)<<" "<<(q[0].ind==k);
			if(q[0].p<max)
			{
				q.push_back(q[0]);
				q.pop_front();
			}

			else
			{
				count++;
				if((q[0].ind==k)&&(q[0].p==max))
					break;

				q.pop_front();
				max=max_element(q.begin(),q.end(),cmp)->p;
				

			
			}
//			cout<<q[0].p<<" ";
//			q.pop_front();
		}
		cout<<count<<"\n";
	}
	return 0;
	
	
}
