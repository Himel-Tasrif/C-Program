/*#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        if(n==100)
        {
            int m = 200 - (200*0.99);
            printf("%d\n", m);
        }
        else{
            int m = (200 * (99 - n)) / (100 - n);
            printf("%d\n", m);
        }
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int arr[100],brr[100],m,n,i;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==100)
        {
             m = 200 - (200*0.99);
        }
        else{
             m = (200 * (99 - arr[i])) / (100 - arr[i]);
        }
        printf("%d\n", m);
    }

    return 0;
}