/*

Halloween party

*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	long long k;
	cin>>t;
	while(t--)
	{
		cin>>k;
		cout<<(k/2)*(k-(k/2))<<endl;
	}
return 0;
}
