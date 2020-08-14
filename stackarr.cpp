#include<iostream>
#include<stdlib.h>
using namespace std;

int stack[100];
int top=-1;
int pop()
{
	int x=stack[top];
	top--;
	return x;
}
void push(int x)
{
	
	top++;
	stack[top]=x;
}

int peek()
{
	return stack[top];
}
void print()
{
	int t=top;
	while(t!=-1)
	{
		cout<<stack[t]<<"-->";
		t--;
	}
}
int main(void)
{
	int x=0;
	while(true)
	{
		cin>>x;
		if(x==0)
		break;
		push(x);
	}
cout<<pop()<<endl;
cout<<pop()<<endl;
cout<<peek()<<endl;	
print();
	
}
