/*
Cutting boards
https://www.hackerrank.com/contests/feb14/challenges/board-cutting

*/
#include<iostream>
#include<algorithm>
#define MOD 1000000007
using namespace std;
long long x[1000007],y[1000007];
int main()
{
	long long m,n,cntX,cntY,sum;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		cntX=cntY=1;
		sum=0;
		m--;n--;
		for(int i=0;i<m;i++)
		{
			cin>>x[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>y[i];
		}
		sort(x,x+m);
		sort(y,y+n);
		int i=m+n;
		m--;n--;
		while(i--)
		{
			if(m!=-1 && n!=-1)
			{
			//	cout<<x[m]<<">"<<y[n]<<endl;
				if(x[m]>y[n])
				{
					cntX++;
				//	cout<<"X:"<<cntY*x[m]<<endl;
					sum=(sum+cntY*x[m])%MOD;
					m--;
				}
				else
				{
					cntY++;
				//	cout<<"Y:"<<cntX*y[n]<<endl;
					sum=(sum+cntX*y[n])%MOD;
					n--;
				}
			}
			else{
			
				if(m!=-1)
				{
				//	cout<<"x:"<<cntY*x[m]<<endl;
					sum=(sum+cntY*x[m])%MOD;
					m--;
				}
				if(n!=-1)
				{
				//	cout<<"y:"<<cntX*y[n]<<endl;
					sum=(sum+cntX*y[n])%MOD;
					n--;
				}
			}	
		}
		cout<<sum<<endl;
	}
	return 0;
}
