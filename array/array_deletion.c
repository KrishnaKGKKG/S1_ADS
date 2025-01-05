include<stdio.h>
#define SIZE 100

int main()
{
    int arr[SIZE],i,n,choice,pos;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    while(1)
    {
        printf("enter:\n1->delete from beginning\n2->delete from end\n3->delete from any position\n4->exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                  if(n<=0)
                 {
                     printf("array is empty!");
                 }
                 else
                 {
                     for(int i=0;i<n-1;i++)
                     {
                         arr[i]=arr[i+1];
                     }
                     n--;
                     printf("element deleted from beginning\n");
                 }
                 break;
            case 2:
               if(n<=0)
               {
                   printf("array is empty!\n");
               }
               else
               {
                n--;
                printf("element deleted from end\n");
               }
               break;
            case 3:
                if(n<=0)
                {
                    printf("array is empty!\n");
                }
                else
                {
                    printf("enter position to delete:");
                    scanf("%d",&pos);
                    if (pos<0 || pos>=n)
                    {
                        printf("invalid position!\n");
                    }
                    else
                    {
                        for(int i=pos;i<n-1;i++)
                        {
                            arr[i]=arr[i+1];
                        }
                        n--;
                        printf("element deleted from position %d\n,pos");
                    }
                }
                break;
            case 4 : return 0;
            default: printf("invalid choice.try again");
        
        }
        printf("array after deletion:\n");
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
