#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(void)
{   int ar[8];
	int ar1[]={1,2,3,4,5};
	int ar2[]={2,4,6};
    int p1=0,p2=0;
	for(int i=0;i<8;i++)
	{   if(p1==5)
		{
		ar[i]=ar2[p2];p2++;continue;}
		if(p2==3)
		{ar[i]=ar1[p1];p1++;continue;}
		
		if(ar1[p1]<=ar2[p2])
		{
			ar[i]=ar1[p1];p1++;
		}
		else
		{
			ar[i]=ar2[p2];p2++;
		}
		
		
	}
	for(int i=0;i<8;i++)
	{
		cout<<ar[i]<<" ";
	}
	
	
	
	return 0;
}
