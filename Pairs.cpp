/*
Pairs
link:https://www.hackerrank.com/challenges/pairs
*/
#include<iostream>
#include<algorithm>
#define FOR(I,N) for(I=0;I<N;I++)
using namespace std;

int main()
{
	long n,i;
	long long k,cnt=0;
	cin>>n>>k;
	long long ar[n+1];
	FOR(i,n)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	i=0;
	while(ar[i]+k<=ar[n-1])
	{
		//cout<<ar[i]+k<<endl;
		if(binary_search(ar,ar+n,ar[i]+k))
			cnt++;
		i++;
	}
	cout<<cnt;
	return 0;
}
