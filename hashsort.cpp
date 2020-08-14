#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

const int size=10;

int ar[]={2,5,1};
int h[size];
int hash(int key)
{
	return key%size;
}
int main(void)
{   

	for(int i=0;i<size;i++)
	{
		h[i]=0;
	}

	for(int i=0;i<3;i++)
	{
		h[hash(ar[i])]++;
	}
	int i=0;
	for( i=0;i<3;i++)
	{
		if(h[hash(ar[i])]>1)
		{
		cout<<ar[i]<<endl;break;
	}}
	if(i==3)
	cout<<"undefined";
	return 0;
}
