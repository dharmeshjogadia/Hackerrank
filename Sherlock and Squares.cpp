/*
hackerrank
Sherlock and Squares
link:https://www.hackerrank.com/contests/mar14/challenges/sherlock-and-squares
*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long t,a,b;
	cin>>t;
	while(t--)
	{
			cin>>a>>b;
		//	cout<<sqrt(b)<<"-"<<sqrt(a)<<endl;
			long long r=(long long)sqrt(b)-(long long)sqrt(a);
			
			if(sqrt(a)-(long)sqrt(a)==0)
				r++;
			cout<<r<<endl;
	}
	return 0;
}
