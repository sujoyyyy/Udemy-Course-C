#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

int arr[]={9,6,7,3,4,8,2,3,5,1};

void bubble(int a[])
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
			
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"->";
	}
	cout<<endl;
}
void selection(int a[])
{
	for(int i=0;i<10;i++)
	{
		int min=a[i];
		int j=i;
		for(int k=i;k<10;k++)
		{
			if(min>a[k])
			{min=a[k];
			j=k;
			}
		}
		
		if(a[j]>a[i])
		{
			int t=a[j];
			a[j]=a[i];
			a[i]=t;
		}
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"->";
	}
	cout<<endl;
			
}
void insertion(int arr[])
{
	int i, key, j; int n=10; 
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
		for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<"->";
	}
	cout<<endl;
	
	
}
int merge(int a[])


int main(void)
{
	bubble(arr);
	selection(arr);
	insertion(arr);
	return 0;
}
