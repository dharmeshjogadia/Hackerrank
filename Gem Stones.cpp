/*
Gem Stones
link:https://www.hackerrank.com/challenges/gem-stones
*/
#include<iostream>
#include<set>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
	int n,i,j,cnt=0;
	string str;
	set<char> sChar;
	int charHash[27]={0};
	cin>>n;
	FOR(i,n)
	{
		cin>>str;
		FOR(j,str.length())
			sChar.insert(str[j]);

		for(set<char>:: iterator it=sChar.begin();it!=sChar.end();it++)
				charHash[*it-97]++;
		sChar.clear();
	}
	FOR(i,26)
		if(charHash[i]/n==1 && charHash[i]%n==0)
			cnt++;
	cout<<cnt;
	return 0;
}
