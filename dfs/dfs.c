#include<stdio.h>

#define MAX 100

void dfs(int n, int graph[n][n], int v[],int source)
{
    printf("%d",source);
    v[source]=1;
    
    for(int i=0;i<n;i++)
    {
        if (graph[source][i] !=0 && !v[i])
        {
            dfs(n,graph,v,i);
        }
    }
}

int  main()
{
    int n;
    printf("enter number of nodes:");
    scanf("%d",&n);
    
    int v[n];
    for(int i=0;i<n;i++)
    {
        v[i]=0;
    }
    
    int a[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    int source;
    printf("enter starting node:");
    scanf("%d",&source);
    if(source<0 || source>= n)
    {
        printf("invalid starting point!");
        return 1;
    }
    
    printf("dfs->");
    dfs(n,a,v,source);
    printf("\n");
    return 0;
}