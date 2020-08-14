#include<iostream>
using namespace std;
int calc=0;
int fibonac(int n)
{   calc++;
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	return fibonac(n-1)+fibonac(n-2);
}
int fib(int n)
{
	int a=0;
	int b=1;int c=1;
	for(int i=2;i<=n;i++)
	{
		 c=a+b;
		a=b;
		b=c;
		
	}
	return c;
}
int main(void)
{
	int x;
	cin>>x;
	cout<<fibonac(x)<<endl;
	cout<<calc;
	return 0;
}
