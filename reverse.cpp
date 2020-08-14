#include<stdlib.h>
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* nptr;
	
}* hptr=NULL;

void insert (int x,int p)
{   
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
	if(hptr==NULL)
	{
	   hptr=temp;
	   hptr->nptr=NULL;
	   return;
	}
	if(p==0)
	{
		temp->nptr=hptr;
		hptr=temp;
	}
	else
	{   struct node* thptr=hptr;
		int i=0;
		while(i<p-1)
		{i++;
		 thptr=thptr->nptr;
		}
		temp->nptr=thptr->nptr;
		thptr->nptr=temp;	
		
	}
	
}
void print()
{
	struct node* thptr=hptr;
	while(thptr!=NULL)
	{
		cout<<thptr->data<<"---->";
		thptr=thptr->nptr;
	}
	cout<<endl;
}



 void reverse() 
    { 
        
        node* current = hptr; 
        node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            next = current->nptr; 
  
            // Reverse current node's pointer 
            current->nptr = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        hptr = prev; 
    } 	
int main(void)
{
	int stop=1;int x;int p;
	while(stop)
	{
		cin>>x>>p;
		if(x==0)
		{
			break;
		}
		insert(x,p);
		
	}	
	
	print();
	reverse();
	print();
	return 0;
}


