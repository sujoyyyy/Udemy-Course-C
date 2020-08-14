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
bool isEmpty()
{
	if(front==NULL)
	return true;
	else
	return false;
}
















