/*
Weekly Challenges - Week 2 
Cut the tree
link:https://www.hackerrank.com/contests/w2/challenges/cut-the-tree/editorial
*/
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;
int weight[100009];
int val[100009];
bool visited[100009];
vector<int> *graph;
 
int DFS(int node)
{
	if(visited[node])
		return 0;
	//cout<<node<<":\n";
	if(graph[node].size()==1)
	{
		val[node]=weight[node-1];
		visited[node]=true;
		return val[node];
	}
	else
	{
		visited[node]=true;
		int c=weight[node-1];
		for(vector<int> :: iterator it=graph[node].begin();it!=graph[node].end();it++)
				c+=DFS(*it);
		val[node]=c;
		return val[node];
	}
	
}
int diff(int value , int sum)
{
	return abs(sum-2*value);
}
int main()
{
	int n,x,y,i,sum=0;
	
	cin>>n;
	graph=new vector<int>[n+1];
	
	FOR(i,n)
	{
		cin>>weight[i];
		sum+=weight[i];
	}
		//cout<<sum<<endl;
	FOR(i,n-1)
	{
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	FOR(i,n)
		val[i+1]=visited[i+1]=0;
	
	int root;
	for(i=1;i<=n;i++)
		if(graph[i].size()>1)
		{
			root=i;
			break;
		}	
	int c=DFS(root);
/*	FOR(i,n)
		cout<<val[i+1]<<endl;
*/		
	FOR(i,n)
		val[i]=diff(val[i+1],sum);
	sort(val,val+n);
	cout<<val[0];
/*	FOR(i,n)
		cout<<val[i+1]<<endl;
*/		
	return 0;	
}
