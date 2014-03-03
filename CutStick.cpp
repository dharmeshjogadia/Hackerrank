/*

Cut the sticks

*/
#include<iostream>
#include<algorithm>
#include<unistd.h>
using namespace std;
void print(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i];
	cout<<endl;
}
int minimum(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]>0 && min>a[i] )
			min=a[i];
	return min;
}
int main()
{
	int n,cnt,m,i,min;
	cin>>n;
	int ar[n+1];
	m=n;
	i=0;
	while(i<n)
	{
		cin>>ar[i++];
	}
	sort(ar,ar+n);
	m=0;
	while(m<n)
	{
		cnt=0;
		min=ar[m];
		for(i=m;i<n;i++)
		{
			if(ar[i]>0)
			{
				ar[i]-=min;
				cnt++;
				if(ar[i]==0)
					m++;
			}
		}
//		print(ar,n);
		cout<<cnt<<endl;
//		sleep(5);
	}
	
return 0;
}

