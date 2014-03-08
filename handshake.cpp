/*

Handshake
link:https://www.hackerrank.com/challenges/handshake
*/
#include<iostream>
using namespace std;

int main()
{
	int t;
	long long n;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		cout<<n*(n-1)/2<<endl;
	}
return 0;
}
