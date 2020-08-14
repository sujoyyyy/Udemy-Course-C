#include<iostream>
#include<stdlib.h>
using namespace std;

int stack1[100];
int stack2[100];
int top1=-1;
int top2=-1;
int pop(int ar[],int top)
{
	int x=ar[top];
	top--;
	return x;
}
void push(int x,int ar[],int top)
{
	
	top++;
	ar[top]=x;
}


void print()
{
	int t=top1;
	while(t!=top2)
	{
		cout<<stack1[t]<<"-->";
		t--;
	}
}
void enqueue(int x)
{
	while(top1!=-1)
	{ push(pop(stack1,top1),stack2,top2);
	}
	push(x,stack1,top1);
	while(top2!=-1)
	{ push(pop(stack2,top2),stack1,top1);
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
		enqueue(x);
	}

print();
	
}
