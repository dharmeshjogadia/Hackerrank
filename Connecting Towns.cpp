/*
Connecting Towns
link:https://www.hackerrank.com/challenges/connecting-towns
*/
#include<iostream>
#define MOD 1234567
#define FOR(I,N) for(I=0;I<N;I++)
using namespace std;

int main()
{
	int t,n,m,tmpIn;
	cin>>t;
	while(t--)
	{
		cin>>n;
		m=1;
		while(--n)
		{
			cin>>tmpIn;
			m=(m*tmpIn)%MOD;
		}
		cout<<m<<endl;
	}
	return 0;
}


