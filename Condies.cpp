/*
Dynamic Programming
Candies
link:https://www.hackerrank.com/challenges/candies
*/
#include<iostream>
#define FOR(i,n) for(i=0;i<n;i++)
#define MAX(n,m) n>m?n:m;
using namespace std;

int main()
{
	int n,i,j,sum=0;
	cin>>n;
	int *rankAr=new int[n+1];
	int *candyAr=new int[n+1];
	FOR(i,n)
		cin>>rankAr[i];
	FOR(i,n)
	{
		candyAr[i]=1;
		if(rankAr[i]>rankAr[i-1])
			candyAr[i]=candyAr[i-1]+1;
		else
		{
			j=i;
			while(j>0 && rankAr[j-1]>rankAr[j])
			{
				candyAr[j-1]=MAX(candyAr[j-1],candyAr[j]+1);
				j--;
			}
		}
	}
	FOR(i,n)
		sum+=candyAr[i];
	cout<<sum;
	return 0;
}

