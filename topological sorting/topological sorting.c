#include<stdio.h>
#define max 100

int stack[max];
int top=-1;

void dfs(int node,int n,int a[max][max],int v[])
{
    v[node]=1;
    for( int i=0;i<n;i++)
    {
        if(a[node][i]==1 &&  !v[i])
        {
            dfs(i,n,a,v);
        }
    }
    stack[++top]=node;
}
 
 void topologicalsort(int a[max][max],int n,int v[])
 {
     for(int i=0;i<n;i++)
     {
         if(!v[i])
         {
             dfs(i,n,a,v);
         }
     }
     printf("topological order:");
     while(top!= -1)
     {
     printf("%d\t",stack[top--]);
     }
     printf("\n");
     
     
 }

int main()
{
    int n;
    printf("enter number of nodes:");
    scanf("%d",&n);
    sta
    int v[n];
    for(int i=0;i<n;i++)
    v[i]=0;
     
    int a[n][n];
    printf("enter the adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {  
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    topologicalsort(a,n,v);
    return 0;
}