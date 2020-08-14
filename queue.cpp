#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* nptr;
}* front= NULL;
struct node* rear=NULL;

int dequeue()
{   int x;
	if(front==rear)
	{
		x=front->data;
		front=rear=NULL;
	}
	else
	front=front->nptr;
	return x;
}

void enqueue(int x)
{
struct node* temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->nptr=NULL;
if(rear==NULL)
{
   front=rear=temp;
	}	
	else
	{
		rear->nptr=temp;
		rear=temp;
	}
}
void print()
{
	struct node* t=front;
	while(t!=NULL)
	{
		cout<<t->data<<"--->";
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
		enqueue(x);
	}
cout<<dequeue()<<endl;
cout<<dequeue()<<endl;
print();
	
}



















