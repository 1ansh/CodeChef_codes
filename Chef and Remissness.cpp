#include <bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return a > b ? a : b;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int ans1,ans2;
		ans1=max(a,b);
		ans2=a+b;
		cout<<ans1<<" "<<ans2<<endl;
	}
}
