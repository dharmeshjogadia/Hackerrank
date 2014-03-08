/*
Make it Anagram

link:https://www.hackerrank.com/contests/feb14/challenges/make-it-anagram
*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int aStr[150]={0},bStr[150]={0};
    long sum=0;
    char ch,a[10005],b[10005];
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0;a[i]!='\0';i++)
    {
        aStr[(int)a[i]]+=1;
    }
    for(int i=0;b[i]!='\0';i++)
    {
     bStr[(int)b[i]]+=1;
    }

    for(int i=97;i<=122;i++)
    {
        if(aStr[i]>bStr[i])
            sum+=aStr[i]-bStr[i];
        else
            sum+=bStr[i]-aStr[i];
    }
    cout<<sum<<endl;
return 0;
}

