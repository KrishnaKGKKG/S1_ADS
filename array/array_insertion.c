#include<stdio.h>
#define SIZE 100

int main()
{
    int i,arr[SIZE],n,choice,element,pos;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
   while(1)
   {
       printf("enter:\n1->insert at beginning\n2->insert at end\n3->insert at any position\n4->exit\n");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
                printf("enter element to insert:");
                scanf("%d",&element);
                for(i=n;i>0;i--)
                {
                arr[i]=arr[i-1];
                }
                arr[0]=element;
                n++;
                break;
            case 2:
               printf("enter element to insert:");
               scanf("%d",&element);
               arr[n]=element;
               n++;
               break;
            case 3:
              printf("enter element to insert:");
              scanf("%d",&element);
              printf("enter position to insert:");
              scanf("%d",&pos);
              if(pos<1 || pos> n+1)
              {
                  printf("invalid position!");
                  break;
              }
              for(i=n;i>=pos;i--)
              {
              arr[i]=arr[i-1];
              }
              arr[pos-1]=element;
              n++;
              break;
            case 4:
               return 0;
            default:
               printf("invalid choice!");
       }
       printf("array after insertion:\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   printf("\n");
   }
   
   return 0;
}