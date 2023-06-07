#include <stdio.h>

int lis(int arr[], int n) {
  int lis[n];

  lis[0] = 1;

  /* Compute optimized LIS values in
     bottom up manner */
  for (int i = 1; i < n; i++) {
    lis[i] = 1;
    for (int j = 0; j < i; j++)
      if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
        lis[i] = lis[j] + 1;
  }

  // Return maximum value in lis[]
  int max = lis[0];
  for (int i = 1; i < n; i++) {
    if (lis[i] > max)
      max = lis[i];
  }
  return max;
}

int main() {
  // Your code goes here;
  //int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
  //int n = 9;
  int arr[100],n,i;
  printf("Enter array size: ");
  scanf("%d",&n);
  printf("Enter %d of numbers: ",n);
  for(i=0; i<n; i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("The length of LIS is: %d", lis(arr, n));
  return 0;
}
