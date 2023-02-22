// Merge Sort (Acsending Order)

#include<stdio.h>
void mergesort();
void merge();
int main()
{
    int arr[100],lb,hb,mid,n,i;

    printf("Enter array size: ");
    scanf("%d",&n);
    printf("\n");

    printf("Enter %d numbers: ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
        lb = 0;
        hb = n-1;
    mergesort(arr,lb,hb);
    printf("\n");
    printf("Sorted Elements Are: ");

    for(i=0; i<n; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    return 0;
}

//For Divided:
void mergesort(int arr[],int lb,int hb)
{
    int mid;
    if(lb < hb)
    {
        mid = (lb+hb)/2;
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,hb);
        merge(arr,lb,mid,hb);
    }
}

//For Merge:
void merge(int arr[],int lb,int mid,int hb)
{
    int brr[100];
    int i,j,k;
    i = lb;
    j = mid+1;
    k = lb;

    while((i <= mid) && (j <= hb))
        {
            if(arr[i] < arr[j])
            {
                brr[k] = arr[i];
                i++;
                k++;
            }
            else
            {
                brr[k] = arr[j];
                j++;
                k++;
            }
        }

        if(i>mid)
        {
            while(j <= hb)
            {
                brr[k] = arr[j];
                j++;
                k++;
            }
        }
        else
        {
            while(i <= mid)
            {
                brr[k] = arr[i];
                i++;
                k++;
            }
        }
        //Now Add all
        for(i = lb; i <= hb; i++)
        {
          arr[i] = brr[i];
        }
}