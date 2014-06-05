/*
Stock Maximize
link:https://www.hackerrank.com/challenges/stockmax
*/
#include<iostream>
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main()
{
	long t,n,i,max=0,sum,tmp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long ar[n+1];
		
		 for(i=0;i<n;i++)
			cin>>ar[i];
		max=ar[n-1];
		sum=0;
		
		for(i=n-2;i>=0;i--)
		{
			if(max<ar[i])
				max=ar[i];
			else
				sum+=max-ar[i];
		}
		cout<<sum<<"\n";
	}	
	
return 0;
}
