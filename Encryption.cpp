/*

Encryption

*/
#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;
int main()
{
	char str[82];
	int r,c,len;
	cin>>str;
	len=strlen(str);
//	cout<<len;
	r=floor(sqrt(len));
	c=ceil(sqrt(len));
	//	cout<<endl<<r<<"-"<<c<<endl;
	if(r!=c)
		r++;
	for(int i=0;i<c;i++)
	{
		for(int j=i;j<len;j+=r)
			cout<<str[j];
		cout<<" ";	
	}
return 0;
}
