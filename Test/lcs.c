// Longest Common Subsequence: 
// Tasrif Nur Himel: 
#include <stdio.h>
#include <string.h>
int max(int a, int b);
int lcs(char * X, char * Y, int m, int n){
   int L[m + 1][n + 1];
   int i, j, index;
   for (i = 0; i <= m; i++) {
      for (j = 0; j <= n; j++) {
         if (i == 0 || j == 0)
            L[i][j] = 0;
         else if (X[i - 1] == Y[j - 1]) {
            L[i][j] = L[i - 1][j - 1] + 1;
         } else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
      }
   }
   index = L[m][n];
   char LCS[index + 1];
   LCS[index] = '\0';
   i = m, j = n;
   while (i > 0 && j > 0) {
      if (X[i - 1] == Y[j - 1]) {
         LCS[index - 1] = X[i - 1];
         i--;
         j--;
         index--;
      } else if (L[i - 1][j] > L[i][j - 1])
         i--;
      else
         j--;
   }
   printf("LCS: %s\n", LCS);
   return L[m][n];
}
int max(int a, int b){
   return (a > b) ? a : b;
}
int main(){
   char X[] = "Bangladesh";
   char Y[] = "Belgium";
   int m = strlen(X);
   int n = strlen(Y);
   printf("Length of LCS is %d\n", lcs(X, Y, m, n));
   return 0;
}