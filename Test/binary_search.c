#include<stdio.h>
int main()
{
    int a[100],n,item,min,max,mid;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter %d of Numbers: ",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a Number which you want to search: ");
    scanf("%d",&item);
    min =  0;
    max = n-1;
    while(min <= max)
    {
        mid = (min + max)/2;
        if(a[mid] < item)
        {
            min = mid+1;
        }
        else if(a[mid] == item)
        {
            printf("\n%d found at %d position\n",item,mid+1);
            break;
        }
        else
        {
            max = mid-1;
        }
    }
    if(min > max)
        printf("\nNot found! %d isn't present in the list\n",item);
    return 0;    
}