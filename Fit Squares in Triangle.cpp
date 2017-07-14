#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m;
    cin>>t;
    for(m=0;m<t;m++)
    {
    	int b,count=0;
    	cin>>b;
    	while(b>0)
    	{
    		count=count+(b-2)/2;
    		b=b-2;
		}
		cout<<count<<endl;
	}
}
