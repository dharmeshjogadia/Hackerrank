/*

Closest Numbers

*/

#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
#include<vector>

using namespace std;

class Pair{
	public :
	Pair(int x1,int y1){x=x1;y=y1;}
	int x,y;
	void print()
	{
		cout<<x<<" "<<y<<" ";
	}
};
int main()
{
	int n;
	vector<Pair> vPair; 
	cin>>n;
	int ar[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	int min=1<<30;
	for(int i=0;i<n-1;i++)
	{
		if(abs(ar[i]-ar[i+1])<=min)
		{
			if(abs(ar[i]-ar[i+1])==min)
			{
				Pair nums(ar[i],ar[i+1]);
				vPair.push_back(nums);
			}
			else
			{
				vPair.clear();
				Pair nums(ar[i],ar[i+1]);
				vPair.push_back(nums);
				min=abs(ar[i]-ar[i+1]);
			}
		}
	}
	for(int i=0;i<vPair.size();i++)
	{
		vPair[i].print();
	}
return 0;
}
