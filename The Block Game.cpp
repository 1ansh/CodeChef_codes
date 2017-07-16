#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t,q;
	cin>>t;
	for(q=0;q<t;q++)
	{
		string s1;
		cin>>s1;
		int i,l=s1.length();
		bool flag = true;
		for(i=0;i<l/2;i++)
		{
			if(s1[i]!=s1[l-1-i])
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			cout<<"wins"<<endl;
		}
		else
		{
			cout<<"losses"<<endl;
		}
	}
}
