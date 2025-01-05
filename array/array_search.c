#include<stdio.h>
#define size 10

int main()
{
    int arr[size],i,n,element;
    printf("enter number of elements in array:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter element to search:");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            printf("element %d found at index %d",element,i);
            return 0;
        }
    }    
    printf("not found!") ;
    return 0;
}
