#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		count+=n/100;
		n=n%100;
		count+=n/50;
		n=n%50;
		count+=n/10;
		n=n%10;
		count+=n/5;
		n=n%5;
		count+=n/2;
		n=n%2;
		count+=n/1;
		cout<<count<<endl;
	}
}
