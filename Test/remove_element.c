// Tasrif Nur Himel 
#include<stdio.h>
int main()
{
    int arr[100],i,j,n,index;
    printf("Enter Array size: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter %d of numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter an index you want to remove: ");
    scanf("%d",&index);
    for(i=index; i<n; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("The new elements are: ");
    for(i=0; i<n-1; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}