#include<stdio.h>
#define MAX 100

int main()
{
    int arr1[MAX],n1,n2,i,j,arr2[MAX];
    printf("enter number of elements in array1:");
    scanf("%d",&n1);
    printf("enter elements of array1:\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter number of elements in array2:");
    scanf("%d",&n2);
    printf("enter elements of array 2:\n");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&arr2[i]);
    }
    
    int MArr[MAX];
    for(i=0;i<n1;i++)
    {
        MArr[i]=arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        MArr[i+j]=arr2[j];
    }
    printf("merged array is:");
    for(i=0;i<n1+n2;i++)
    {
    printf("%d",MArr[i]);
    }
    printf("\n");
   return 0; 
}
