/*
Weekly Challenges - Week 4

Palindrome Index

link:https://www.hackerrank.com/contests/w4/challenges/palindrome-index
*/
#include<iostream>
using namespace std;

int main(){
	int t,i,j;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		j=str.length()-1;
		i=0;
		while(i<j)
		{
			//cout<<str[i]<<":"<<str[j]<<"->"<<(str[i]==str[j])<<endl;
			
			if(str[i]==str[j])
			{
				i++;j--;
			}	
			else if(str[i+1]==str[j])
			{
				cout<<i<<"\n";
				break;
			}
			else
			{
				cout<<j<<"\n";
				break;
			}
		}
		if(!(i<j))
			cout<<"-1\n";
	}
	
	return 0;
}
