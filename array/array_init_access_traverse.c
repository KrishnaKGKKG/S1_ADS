#include<stdio.h>
#define size 10
int main()
{
    int i, arr[size],n;
    printf("enter number of elements in array:\n");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for( i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;
}