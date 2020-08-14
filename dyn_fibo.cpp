#include<iostream>
using namespace std;

int main()
{    int x;
	cin>>x;
	int ar[x+1];
	ar[0]=0;
	ar[1]=1;int calc=0;
	for(int i=2;i<=x;i++)
	{
		ar[i]=ar[i-1]+ar[i-2];calc++;
	}
	cout<<ar[x];
	cout<<calc;
	return 0;
}
