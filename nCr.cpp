/*
nCr
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#define MOD 1000000007
#define ULL unsigned long long
using namespace std;

ULL power(ULL a,ULL n)
{
	if(n==0)
		return 1;
	if(n==1)
		return a;
	ULL tmp;
	if(n%2)
	{
		return (a*power(a,n-1))%MOD;
	}
	else
	{
		tmp=power(a,n/2);
		return (tmp*tmp)%MOD;	
	}
	
}
ULL nCr(ULL n,ULL r)
{
	unsigned long long t=n-r,i,numrt=1;
	if(r>t)
		swap(r,t);
		cout<<power(t,5);
	for(i=n;i>t;i--)
		numrt=(numrt*i)%MOD;
		
	t=power(t,MOD-2);
//	cout<<power(t,5);
	for(i=t-1;i>1;i--)
		t=(t*i)%MOD;
	return numrt/t;
}
int main()
{
	cout<<"\nnCr:"<<nCr(4,2);
	return 0;
}
