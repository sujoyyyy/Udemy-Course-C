#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* nptr;
}* tptr=NULL;

int pop()
{
	int x=tptr->data;
	tptr=tptr->nptr;
	return x;
}
void push(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->nptr=tptr;
	tptr=temp;
}

int peek()
{
	return tptr->data;
}
void print()
{
	struct node* t=tptr;
	while(t!=NULL)
	{
		cout<<t->data<<"-->";
		t=t->nptr;
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
