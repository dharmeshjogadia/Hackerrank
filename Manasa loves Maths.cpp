/*
Manasa loves Maths
link:https://www.hackerrank.com/contests/mar14/challenges/manasa-loves-maths

*/

#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	int t;
	char ar[120];
	
	cin>>t;
	while(t--)
	{
			cin>>ar;
			int len=strlen(ar);
			int n=0;
			bool f=false;
			if(len<3)
			{
				if(len==1)
				{
					if((ar[0]-48)%8==0)
						f=true;
					
				}
				else if(len==2)
				{
					if((((ar[0]-48)*10)+(ar[1]-48))%8==0)
						f=true;
					
				}
				
			}
			else
			{
				for(int i=0;i<len;i++)
				{
					for(int j=i+1;j<len;j++)
					{
						for(int k=j+1;k<len;k++)
						{	
							int a=ar[i]-48;
							int b=ar[j]-48;
							int c=ar[k]-48;
							if(((a*100)+(b*10)+c)%8==0)
								f=true;	
							else if(((c*100)+(a*10)+b)%8==0)
								f=true;	
							else if(((b*100)+(c*10)+a)%8==0)
								f=true;	
							else if(((c*100)+(b*10)+a)%8==0)
								f=true;	
							else if(((b*100)+(a*10)+c)%8==0)
								f=true;	
							else if(((a*100)+(c*10)+b)%8==0)
								f=true;	
							if(f)
							break;		
							
						}
						if(f)
						break;	
					}
					if(f)
						break;
				}
			
			}
			if(f)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
	}
		
return 0;
}
