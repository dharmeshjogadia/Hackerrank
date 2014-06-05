/*
Maximizing XOR
https://www.hackerrank.com/contests/w1/challenges/maximizing-xor
*/
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
	
    int max=0,x,cnt1,cnt2,tmpL,tmpR;
	cnt1=cnt2=0;
	tmpL=l;
	tmpR=r;
	for(int i=1;i<=32;i++)
	{
		if(tmpL&1)
			cnt1=i;
		if(tmpR&1)
			cnt2=i;
		tmpL>>=1;
		tmpR>>=1;
	}
	if(cnt1!=cnt2)
	{
		max=1;
		for(int i=0;i<cnt2;i++)
			max*=2;
				return max-1;
	}
	else{
		//long ub=(l+r)/2;
		for(int i=l;i<=r;i++)
		{
			for(int j=r;j>=l;j--)
			{
				x=i^j;
			//	printf("%d x %d =%ld\n",i,j,x);
	 			if(x>max)
	 			max=x;
			}
			
	 		
	 	}
	 	if(max==0)
		 	max=l|r;
		return max;
	}

}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}

