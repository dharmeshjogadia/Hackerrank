/*
Weekly Challenges - Week 3
Sam and sub-strings
link:https://www.hackerrank.com/contests/w3/challenges/sam-and-substrings
*/
#include<iostream>
#include<cmath>
#define TEN 10
#define MOD 1000000007
using namespace std;
long long preSum[200007];

int main()
{
	string str;
	//cout<<pow10(5);
	cin>>str;
	
	long long sum=0,powOf10=1;
	long len=str.length();
	
//	cout<<"len:"<<len<<endl;
	
	for(long i=0;i<len;i++)
	{
		preSum[i]=(preSum[i-1]+(str[i]-48)*(i+1))%MOD;
	}
	
	for(long i=0;i<len;i++)
	{
		sum=(sum+preSum[len-i-1]*powOf10)%MOD;
		powOf10=(powOf10*10)%MOD;
		//cout<<sum<<endl;	
	}
	cout<<sum;
}
