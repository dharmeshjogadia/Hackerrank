/*
Dynamic Programming
Lucky Numbers
link:https://www.hackerrank.com/challenges/lucky-numbers
*/
#include<iostream>
#include<cmath>
#define FOR(i,n,initVl) for(i=initVl;i<n;i++)
using namespace std;
bool prime[201];
int sumOfDigit(long long n)
{
	int d,sum=0;
	while(n>1)
	{
		d=n%10;
		n/=10;
		sum+=d;
	}
	return sum;
}
int main()
{
	int i,j,sum10p,sumDigit;
	long long n,m,k;
	FOR(i,13,2)
	{
		if(!prime[i])
		{
			for(j=i*i;j<=169;j+=i)
			{
				if(j%i==0)
					prime[j]=true;
			}
		}
	}
	sum10p=0;
	sumDigit=0;
	cin>>n>>m;
	
	FOR(k,m+1,n)
	{
		if(k%100==0)
			sum10p=0;
		if(sumDigit==0 || sum10p==0)
			sumDigit=sumOfDigit(k);
		
		 
				
	}
}
