/*

Find the Median

*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n+1];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);
	int inx=n/2;
	if(n%2==0)
		cout<<(ar[inx]+ar[inx+1])/2;
	else
		cout<<ar[inx+1];
return 0;
}
