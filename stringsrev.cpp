#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string str;

int main(void)
{   
	cin>>str;
	
	for(int i=str.length()-1;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}
