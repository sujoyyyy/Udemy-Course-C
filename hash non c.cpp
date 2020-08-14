#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

const int size=10;

struct node
{
	int data;
	struct node* nptr;
};

struct node h[size];
int hash(int key)
{
	return key%size;
}
int main(void)
{    int x;
	for(int i=0;i<size;i++)
	{
		h[i].nptr=NULL;
		h[i].data=0;
	
	}
	cout<<"Enter the numbers"<<endl;
	

	for(int i=0;i<2;i++){
		cin>>x;
	int ind=hash(x);
		struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->nptr=NULL;
	if(h[ind].nptr==NULL)
	{
		h[ind].nptr=temp;
	}
	else
	{
		temp->nptr=h[ind].nptr;
		h[ind].nptr=temp;
	}
	
}
	
	cout<<h[4].nptr->data<<endl;
	cout<<(h[4].nptr)->nptr->data<<endl;
	
	
	
	
	return 0;
}
