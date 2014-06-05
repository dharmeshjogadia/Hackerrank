/*
Weekly Challenges - Week 3
GCD Product
link:https://www.hackerrank.com/contests/w3/challenges/gcd-product
*/
#include<iostream>
#include<cmath>
using namespace std;
#define MAX 15000007
#define MOD 1000000007
bool prime[MAX];

long long gcd(long long a,long long  b)
{
	if(b==0)
		return a;
	gcd(b,a%b);
}
int main()
{
	long long i,j,sRoot,n,m,min,minNum,max;
	unsigned long long product=1;
	
	sRoot=sqrt(MAX);
	
	for(i=2;i<=sRoot;i++)
	{
		if(!prime[i])
		{
			for(j=i*i;j<=MAX-2;j+=i)
			{
				if(j%i==0)
					prime[j]=true;
			}	
		}
	}/*
	for(i=2;i<=20;i++)
		if(!prime[i])
			cout<<i<<endl;*/
	cin>>n>>m;
	min=(n<m)?n:m;
	max=(n>m)?n:m;
	for(i=2;i<=min;i++)
	{
		for(j=i+1;j<=min;j++)
		{
			
			if(j%i==0)
			{
				product=(product*i*2)%MOD;
			}
			else
			{
				if(prime[i] && prime[j])
					product=(product*gcd(j,i)*2)%MOD;
			}
		}
		product=(product*i)%MOD;
	}
	
	
	for(i=min+1;i<=max;i++)
	{
		for(j=2;j<=min;j++)
		{
			if(i%j==0)
			{
				product=(product*j)%MOD;
			}
			else
			{
				if(prime[i] && prime[j])
					product=(product*gcd(i,j))%MOD;
			}
		}
	}
	cout<<product<<endl;
	return 0;
}

