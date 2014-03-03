/*

Flowers

*/
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n,k,noOfFlower=0,FlowerCycle=0;
	long totalCost=0;
	cin>>n>>k;
	int arCost[n+1];
	for(int i=0;i<n;i++)
		cin>>arCost[i];
	sort(arCost,arCost+n);
	
	for(int i=n-1;i>=0;i--)
	{
		totalCost+=arCost[i]*(noOfFlower+1);
		FlowerCycle++;
		if(FlowerCycle>=k)
		{
			noOfFlower++;
			FlowerCycle=0;
		}	
	}
	cout<<totalCost;
return 0;
}
