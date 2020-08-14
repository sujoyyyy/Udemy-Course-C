#include<iostream>
#include<stdlib.h>
using namespace std;
bool flag=false;
struct node
{
	int data;
	struct node* lptr=NULL;
	struct node* rptr=NULL;
}* rptr=NULL;

void insert(int x)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->rptr=temp->lptr=NULL;
	if(rptr==NULL)
	rptr=temp;
	else
	{
		struct node* t=rptr;
		while(true)
		{  
             if(x<t->data)
			 {
			 	if(t->lptr==NULL)
			 	{
			 		t->lptr=temp;return;
				 }
				 else
				 t=t->lptr;
		     }
			 else
			 {
			 	if(t->rptr==NULL)
			 	{
			 		t->rptr=temp;return;
				 }
				 else
				 t=t->rptr;
			 }	 
			 	
		}			
	}
}
void print(struct node* p)
{
	if(p!=NULL)
	{ print(p->lptr);
	  cout<<p->data<<"-->";
	  print(p->rptr);
	}
}
bool lookup(struct node* p,int x)
{
  if(p==NULL)
  return flag;
  
  	if(x<p->data)
  	{ flag=lookup(p->lptr,x);
	  }
	else
	{flag=lookup(p->rptr,x);
	}
	if(x==p->data)
	flag=true;
return flag;

}
		
int main(void)
{
	int x=0;
	while(true)
	{
		cin>>x;
		if(x==0)
		break;
		insert(x);
	}
	print(rptr);
	cout<<endl;
	cout<<lookup(rptr,4);
return 0;
}

