#include<stdlib.h>
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* nptr;
	struct node* pptr;
	
}* hptr=NULL;
void insert (int x,int p)
{   
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
	if(hptr==NULL)
	{
	  
	   temp->nptr=NULL;
	   temp->pptr=NULL;
	    hptr=temp;
	   return;
	}
	if(p==0)
	{
		temp->nptr=hptr;
		temp->pptr=NULL;
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
void del(int p)
{   int x;
	if(hptr==NULL)
	{ cout<<"Empty"<<endl;return;}	
	else
	{
		if(p==0)
		{
			x=hptr->data;
			hptr=hptr->nptr;
		}
		else
		{
			int i=0;
			struct node* thptr=hptr;
			while(i<p-1){ i++;
			thptr=thptr->nptr;
			}
			x=(thptr->nptr)->data;
			if((thptr->nptr)->nptr!=NULL)
			{thptr->nptr=(thptr->nptr)->nptr;
				
			}
			else
			thptr->nptr=NULL;
		}
		
		
		
		
	}
	
	
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
	del(2);
	print();
	return 0;
}


