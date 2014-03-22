/*

Sherlock and The Beast
link:https://www.hackerrank.com/challenges/sherlock-and-the-beast
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	long n,x,y,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		x=-1;
		if(n%3==0)
		{
			cout<<string(n,'5')<<endl;
		}
		else
		{
			for(long i=0;i<=n;i++)
			{
				if(i%3==0 && (n-i)%5==0)
					x=i;	
			}
			if(x!=-1)
			{
				cout<<string(x,'5')+string(n-x,'3')<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
	}
return 0;
}
