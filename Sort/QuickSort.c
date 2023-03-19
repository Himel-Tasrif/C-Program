/* ------ Quick Sort ------
       Name: Tasrif Nur Himel
       ID: 221-35-1078
       Section: 37-(B)       */

#include<stdio.h>
void quicksort(int arr[100],int lb, int hb)
{
    int i,j,pivot,temp;
    if(lb < hb)
    {
        pivot = lb;
        i = lb;
        j = hb;
        while(i<j)
        {
            while(arr[i] <= arr[pivot] && i < hb)
            {
                i++;
            }
            while(arr[j] > arr[pivot])
            {
                j--;
            }
            if(i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quicksort(arr,0,j-1);
        quicksort(arr,j+1,hb);
    }
}
int main()
{
    int arr[100],n,i;
    int lb = 0;
    printf("Enter Array size: ");
    scanf("%d",&n);
    printf("\n");

    printf("Enter %d of Elements: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int hb = n-1;
    quicksort(arr,lb,hb);
    printf("Sorted Elements are: ");
    for(i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}