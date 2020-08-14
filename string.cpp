#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

string rev="";int k;
string reverse(string str)
{
if(k==-1)
return rev;

rev=rev+str[k];	k--;
return reverse(str);	
}
int main(void)
{
	string str;
	getline(cin,str);
	k=str.length()-1; 
	cout<<reverse(str);
	return 0;
}
