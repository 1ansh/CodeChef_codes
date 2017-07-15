#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t,q;
	cin>>t;
	for(q=0;q<t;q++)
	{
		int n,m,k,key,i,cnt1=0,cnt2=0;
		cin>>n>>m>>k;
		vector<int> ar(n+1,0);
		for(i=0;i<m;i++)
		{
			cin>>key;
			ar[key]++;
		}
		for(i=0;i<k;i++)
		{
			cin>>key;
			ar[key]++;
		}
		for(i=1;i<=n;i++)
		{
			if(ar[i]==2)
			{
				cnt1++;
			}
			else if(ar[i]==0)
			{
				cnt2++;
			}
		}
		cout<<cnt1<<" "<<cnt2<<endl;
	}
}
