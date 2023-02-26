#include<stdio.h>
void mergesort();
void merge();
int main()
{
    int arr[100],i,lb,ub,n,mid;
    printf("Enter array size: ");
    scanf("%d",&n);

    printf("\n");

    printf("Enter %d of number: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    lb = 0;
    ub = n-1;
    mergesort(arr,lb,ub);
    printf("\n");
    printf("Sorted Number is: ");
    for(i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
  
}
void mergesort(int arr[], int lb, int ub)
{
    int mid;
    if(lb < ub)
    {
        mid = (lb+ub)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
void merge(int arr[], int lb, int mid, int ub)
{
    int brr[100];
    int i,j,k;
    i = lb;
    j = mid+1;
    k = lb;

    while((i<=mid) && (j<=ub))
    {
        if(arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else{
            brr[k] = arr[j];
            j++;
            k++;
        }
    }

    if(i > mid)
    {
        while(j<=mid)
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid)
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
    }

    for(i=lb; i<=ub; i++)
    {
        arr[i] = brr[i];
    }
}