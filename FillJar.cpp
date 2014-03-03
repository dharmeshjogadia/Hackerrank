/*

Filling Jars
https://www.hackerrank.com/contests/101jan14/challenges/filling-jars

*/
#include<iostream>
#include<cmath>
using namespace std;
//long long ar[10000002]={0};
int main()
{
	long long n,a,b,m,k,tmp;
	long long sum=0;
	cin>>n>>m;
	tmp=0;
	while(m--)
	{
		cin>>a>>b>>k;
		tmp=tmp+k*(b-a+1);
		sum=sum+tmp/n;
		tmp=tmp%n;
		//cout<<endl<<m;		
	}
	cout<<sum;
return 0;
}
