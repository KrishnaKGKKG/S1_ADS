#include<stdio.h>

#define MAXNODES 100

int n;
int queue[MAXNODES];
int front=-1 ,rear=-1;

void enqueue(int value)
{
    if (rear==n-1)
    {
        printf("queue overflow!");
        return;
    }
    if (front ==-1)
    front=0;
    rear++;
    queue[rear]=value;
}

 int dequeue()
 {
     if(front ==-1 || front>rear)
     {
         printf("queue underflow!");
         return -1;
     }
     int value=queue[front];
     front++;
     return value;
 }
 
 void bfs(int graph[][MAXNODES],int n,int visited[],int source)
 {
     enqueue(source);
     visited[source]=1;
     
 while(front<=rear)
 {
     int node = dequeue();
     if (node == -1)
     break;
     printf("%d",node);
     
     for (int i=0;i<n;i++)
     {
         if(graph[node][i] != 0 && !visited[i])
         {
             enqueue(i);
             visited[i]=1;
         }
     }
     
 }
}

int main()
{
    printf("enter the number of nodes:");
    scanf("%d",&n);
    int v[n];
    for (int i=0;i<n;i++)
    {
        v[i]=0;
    }
    
    int a[MAXNODES][MAXNODES];
    printf("enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    int source;
    printf("enter starting node:");
    scanf("%d",&source);
    
    if (source<0 || source>=n)
    {
        printf("invalid starting point!");
        return 1;
    }
    printf("bfs traversal order :");
    bfs(a,n,v,source);
    printf("\n");
    return 0;
}