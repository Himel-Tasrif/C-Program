/* ------ Selection Sort ------
       Name: Tasrif Nur Himel
       ID: 221-35-1078
       Section: 37-(B)       */

#include<stdio.h>
int main()
{

    int arr[100],n,i,j,pos,temp;

    system("color 0a");
    printf("Enter Array Size:\n");
    scanf("%d",&n);

    printf("\n");
    printf("Enter Array Elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n-1; i++)
    {
        pos=i;

        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[pos])
            {
                pos = j;
            }
        }
    if(pos != i)
    {
        temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
        }
    }
    printf("\n");
    printf("Selection Sort (Ascending-Order) of %d elements: \n",n);

    for(i=0; i<n; i++)
    {
        printf(" %d",arr[i]);

    }
    return 0;
}
