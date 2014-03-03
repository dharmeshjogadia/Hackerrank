/*

Service Lane

*/
#include<iostream>
using namespace std;


long minimum(long ar[],long lb,long ub)
{
	long min=100000;
	for(long i=lb;i<=ub;i++)
		if(ar[i]<min)
			min=ar[i];
	return min;
}
int main()
{
	int t;
	long n,m,lb,ub,i=0;
	cin>>n>>m;
	long ar[n+1];

	while(i<n)
	{
		cin>>ar[i++];
	}
	i=0;
	while(i<m)
	{
		cin>>lb>>ub;
		cout<<minimum(ar,lb,ub)<<endl;
		i++;
	}
		
return 0;
}
