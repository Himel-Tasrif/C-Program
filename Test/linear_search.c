#include<stdio.h>
int main()
{
    int arr[100],i,n,key;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("\n");

    printf("Enter %d of numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number you want to search: ");
    scanf("%d",&key);

    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            printf("%d is found at %d index",key,i+1);
        }
        printf("\n");
    }
    return 0;
}