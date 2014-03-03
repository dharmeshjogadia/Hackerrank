/*
Utopian Tree
*/
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		i=1;
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			if(j%2)
				i=i*2;
			else
				i++;
		}
		cout<<i<<endl;
		
	}
return 0;
}
