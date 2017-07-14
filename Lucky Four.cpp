#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m;
    cin>>t;
    for(m=0;m<t;m++)
    {
    	string str;
    	cin>>str;
    	int count=0;
    	for(int i=0;i<str.length();i++)
    	{
    		if(str[i]=='4')
    		{
    			count++;
			}
		}
		cout<<count<<endl;
	}
}
