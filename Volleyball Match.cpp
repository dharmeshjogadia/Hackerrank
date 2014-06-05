/*
Volleyball Match
*/
#include<stdio.h>
#include<math.h>
#define MOD 1000000007
int main()
{
	long long a,b,tmp;
	long long x=1;
	scanf("%lld %lld",&a,&b);
	long long winner=(a>b?a:b);
	long long loser=(a<b?a:b);
	if(abs(a-b)>=2 && (a==25 || b==25))
	{
		for(long long i=winner;i>winner-loser;i--)
			x*=i;
			printf("%lld",x);
		for(long long i=1;i<=loser;i++)
			x*=pow(i,MOD-2);
	}
	printf("%lld",x);
	return 0;
	
}
