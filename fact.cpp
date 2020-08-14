#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==1||n==0)
	return 1;
	
	return n*factorial(n-1);
}
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main(void)
{
	int x;
	cin>>x;
	cout<<factorial(x)<<endl;
	cout<<fact(x);
	return 0;
}
