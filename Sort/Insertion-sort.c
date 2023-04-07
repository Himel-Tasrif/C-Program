// ------ Insertion  Sort ------


#include<stdio.h>
int main()
{
    int a[100],n,i,j,key;
    //system("color 0a");
    printf("Enter Array Size:\n");
    scanf("%d",&n);

    printf("\n");
    printf("Enter %d Elements:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=1; i<n; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    printf("\n");
    printf("Insertion Sort (Ascending-Order) of %d elements: \n",n);
    for(i=0; i<n; i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}    