#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m;
    cin>>t;
    for(m=0;m<t;m++)
    {
    	int b,ls;
    	cin>>b>>ls;
    	float ans1,ans2;
    	ans1=sqrt(ls*ls-b*b);
    	ans2=sqrt(ls*ls+b*b);
    	cout<<ans1<<" "<<ans2<<endl;
	}
}
