/*

Angry Children

*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int ar[n+1];
	for(int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);
	int min=1<<30;
	for(int i=0;i+k<=n;i++)
		if(ar[i+k-1]-ar[i]<min)
			min=ar[i+k-1]-ar[i];
	cout<<min;
return 0;
}
