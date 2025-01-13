#include<stdio.h>
#include<limits.h>
#define max 100

int FindMinDist(int n,int dist[],int visited[])
{
    int min=INT_MAX, MinIndex;
    for(int v=0;v<n;v++)
    {
        if(!visited[v] && dist[v]<min)
        {
            min=dist[v];
            MinIndex=v;
        }
    }
        return MinIndex;
    
}

void dijkstra(int n,int graph[max][max],int source)
{
    int dist[n],visited[n];
    for(int i=0;i<n;i++)
    {
        dist[i]=INT_MAX;
        visited[i] =0;
    }
    dist[source]=0;
    for(int count=0;count<n-1;count++)
    {
        int u=FindMinDist(n,dist,visited);
        visited[u]=1;
        for(int v=0;v<n;v++)
        {
            if(!visited[v] && graph[u][v]  && dist[u]!=INT_MAX && dist[u]+graph[u][v] < dist[v])
                dist[v]=dist[u]+graph[u][v];
        }
    }
        printf("NODE\tDISTANCE\n");
        
    {    
        for(int i=0;i<n;i++)
            printf("%d\t%d\n",i,dist[i]);
    }
}

int main()
{
    int n,graph[max][max],source;
    printf("enter number of nodes:");
    scanf("%d",&n);
    printf("enter the adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    printf("enter the starting point:");
    scanf("%d",&source);
    if(source<0 || source >=n)
    { printf("invalid starting point!");
    return -1;
    }
    dijkstra(n,graph,source);
    return 0;
}
    
    
    
    
    
    
    