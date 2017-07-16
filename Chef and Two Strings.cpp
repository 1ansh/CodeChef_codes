#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t,q;
	cin>>t;
	for(q=0;q<t;q++)
	{
		string s1,s2;
		cin>>s1>>s2;
		int i,min=0,max=s1.length();
		for(i=0;i<s1.length();i++)
		{
			if(s1[i]!='?' && s2[i]!='?')
			{
				if(s1[i]==s2[i])
				{
					max--;
				}
				else
				{
					min++;
				}
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}
