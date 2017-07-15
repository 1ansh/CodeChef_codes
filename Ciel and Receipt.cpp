#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0;
		cin>>n;
		count+=n/2048;
		n=n%2048;
		count+=n/1024;
		n=n%1024;
		count+=n/512;
		n=n%512;
		count+=n/256;
		n=n%256;
		count+=n/128;
		n=n%128;
		count+=n/64;
		n=n%64;
		count+=n/32;
		n=n%32;
		count+=n/16;
		n=n%16;
		count+=n/8;
		n=n%8;
		count+=n/4;
		n=n%4;
		count+=n/2;
		n=n%2;
		count+=n/1;
		cout<<count<<endl;
	}
}
