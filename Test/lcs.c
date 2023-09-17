// Longest Common Subsequence: 
// Tasrif Nur Himel: 
#include <stdio.h>
#include <string.h>
int max(int a, int b);

// Function to find the length of the longest common subsequence
int lcs(char * X, char * Y, int m, int n){
    
// Create a 2D array to store the lengths of common subsequences
   int L[m + 1][n + 1]; // L[18][20]
   

   int i, j, index;
   for (i = 0; i <= m; i++) {  //y-axis
      for (j = 0; j <= n; j++) { // x-axis
         if (i == 0 || j == 0)
            L[i][j] = 0;
         else if (X[i - 1] == Y[j - 1]) {
            L[i][j] = L[i - 1][j - 1] + 1;
         } else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
      }
   }
// Print the LCS matrix
   printf("LCS Matrix:\n");
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
// Find the LCS string.........
   index = L[m][n]; //L[17][19] = 5;
   char sub[index + 1];
   sub[index] = '\0';
   i = m, j = n;
   while (L[i][j] != 0) {
      if (X[i - 1] == Y[j - 1]) {
         sub[index - 1] = X[i - 1];
         i--;
         j--;
         index--;
      } else if (L[i - 1][j] > L[i][j - 1])
         i--;
      else
         j--;
   }
   
// Print the LCS
   printf("LCS: %s\n", sub);
   
// Return the length of the longest common subsequence

   return L[m][n];
}


// Function to find the maximum of two integers
int max(int a, int b){
   return (a > b) ? a : b;
}
int main(){
   char X[] = "I LOVE BANGLADESH";
   char Y[] = "BHUTAN IS BEAUTIFUL";
   int m = strlen(X); //m = 17
   int n = strlen(Y); // n = 19
   printf("Length of LCS is %d\n", lcs(X, Y, m, n));
   return 0;
}