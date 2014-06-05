/*
Missing Numbers
link:https://www.hackerrank.com/challenges/missing-numbers
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
	long n,m,i,j,lastNum;
	int tmp;
	vector<int> A,B,C;
	
	cin>>n;
	FOR(i,n)
	{
		cin>>tmp;
		A.push_back(tmp);
	}
	cin>>m;
	FOR(i,m)
	{
		cin>>tmp;
		B.push_back(tmp);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	i=j=0;
	while(i<m && j<n)
	{
		if(B[i]<A[j])
		{
			C.push_back(B[i]);
			i++;
		}
		else if(B[i]==A[j])
		{
			i++;j++;
		}
		else
			j++;
	}
	while(i<m)
		C.push_back(B[i++]);
		
	lastNum=0;
	FOR(i,C.size())
	{
		
		if(lastNum!=C[i])
			cout<<C[i]<<" ";
		lastNum=C[i];
		
	}
	
	return 0;
}

