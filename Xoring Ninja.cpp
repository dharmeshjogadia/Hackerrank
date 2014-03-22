/*
Xoring Ninja
link:https://www.hackerrank.com/contests/mar14/challenges/xoring-ninja
*/
#include<iostream>

using namespace std;
#define MOD 1000000007
long long sum;
int generate_powerset(long long *temparr, int level, int start,long long *arr,long size)
{
	long i, j;
	for(i=start; i<size; i++)
	{
		temparr[level] = arr[i];
		//("{ ");
		long long m=0;
		for (j=0; j<=level; j++)
			m=m^temparr[j];
		sum=(sum+m)%MOD;
	//	printf("}\n");
		if( i < size-1)
		{
			cout<<"b\n";
		
			generate_powerset(temparr, level+1, i+1,arr,size);
		}
		
			
	}
}
int main()
{
	int t;
	 long n;
	cin>>t;
	while(t--)
	{
			sum=0;
			cin>>n;
			long long ar[n+1],tmp[n+1];
			
			for(long i=0;i<n;i++)
				cin>>ar[i];
			generate_powerset(tmp,0,0,ar,n);
			cout<<sum<<endl;
	}
	return 0;
}
