#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int a,b;
		a=int(str[0]);
		b=int(str[str.length()-1]);
		cout<<a+b-96<<endl;
	}
}
