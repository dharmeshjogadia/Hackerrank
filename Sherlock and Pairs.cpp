/*
Sherlock and Pairs
link:https://www.hackerrank.com/contests/101feb14/submissions/code/1362380
*/

#include<iostream>
using namespace std;
//short ar[1000007]={0};
int main()
{
	int t;
	long long n,cnt,tmp,max,min;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ar[1000007]={0};
		cnt=0;
		max=0;
		min=1000000;
		for(long long i=0;i<n;i++)
		{
			cin>>tmp;
			ar[tmp]+=1;
			/*if(max<tmp)
				max=tmp;
			if(min>tmp)
				min=tmp;*/
		}
		for(long long i=1;i<=1000000;i++)
		{
			if(ar[i]>=2)
			{
				cnt+=(long long)ar[i]*(long long)(ar[i]-1);		
			}
		}
		cout<<cnt<<endl;
		
	}
return 0;
}

