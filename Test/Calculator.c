#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter Number 6: ");
    scanf("%d",&n);
    for(i=1; i<=n/2; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d",(j*2)-1);
        }
        printf("\n");
        for(j=1; j<=i; j++)
        {
            printf(" %d",j*2);
        }
        printf("\n");
    }

    return 0;
}