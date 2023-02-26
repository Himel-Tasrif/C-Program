//Bubbble Sort in Ascending Order

#include<stdio.h>
int main()
{
    int arr[100],i,j,n,temp;

    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("\n");

    printf("Enter %d Numbers: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The Ascending Sorted Array is: ");
    for(i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}