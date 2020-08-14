#include<iostream>
#include<stdlib.h>
using namespace std;
struct graph
{
	int n;
	int ar[100][100];
} G;

struct graph addnode(struct graph K,int v)
{
	K.n++;
	int x;
	for(int i=0;i<K.n;i++)
	{
		cin>>x;
		K.ar[v][i]=x;
		K.ar[i][v]=x;
	}
	return K;
}
struct graph addedge(struct graph K,int u,int v)
{
	K.ar[u][v]=1;
	K.ar[v][u]=1;
	return K;
}
int main()
{
	
	cout<<"Enter n"<<endl;
	cin>>G.n;
	int ar[G.n][G.n];
	for(int i=0;i<G.n;i++)
	{
		for(int j=0;j<G.n;j++)
		{
			cin>>G.ar[i][j];
		}
	}
		for(int i=0;i<G.n;i++)
	{
		for(int j=0;j<G.n;j++)
		{
			cout<<G.ar[i][j]<<" ";
		}
		cout<<endl;
	}
	G=addnode(G,2);
		for(int i=0;i<G.n;i++)
	{
		for(int j=0;j<G.n;j++)
		{
			cout<<G.ar[i][j]<<" ";
		}
		cout<<endl;
	}
	G=addedge(G,2,2);
		for(int i=0;i<G.n;i++)
	{
		for(int j=0;j<G.n;j++)
		{
			cout<<G.ar[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

