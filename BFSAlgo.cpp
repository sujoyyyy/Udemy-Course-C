#include<queue.h>
using namespace std;

void BFS(int G[][],int start,int n)
{
 int i=start;
 int visited[n]={0};	
 enqueue(i);
 visited[i]=0;
 while(!isEmpty())
 {
 	u=dequeue();
 	for(int v=0;v<n;v++)
 	{
 		if(G[u][v]==1&&!visited[v])
 		{
 			enqueue(v);
 			cout<<v<<endl;
 			visited[v]=1;
		 }
	 }
 	
 	
 	
 	
	 }	
	
	
}
int main()
{
    int** G, n, start;
    cout << "Enter the number of nodes : ";
    cin >> n;
    G = new int* [n+1];
    for (int i = 0; i <= n; i++)
    {
        G[i] = new int[n+1];
    }
    cout << "\nEnter the adjacency matrix of G : ";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "(" << i << ", " << j << ") : ";
            cin >> G[i][j];
        }
    }
    cout << "Enter the starting vertex : ";
    cin >> start;
    BFS(G, start, n);
    return 0;
}