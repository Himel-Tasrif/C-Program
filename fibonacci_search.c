//   Tasrif Nur Himel

/*
                                    *** Fibonacci Search ***
*/

#include <stdio.h>

// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Function to perform Fibonacci search
int fibonacciSearch(int arr[], int n, int key) {
    int fibM2 = 0;  // (m-2)'th Fibonacci number
    int fibM1 = 1;  // (m-1)'th Fibonacci number
    int fib = fibM2 + fibM1;  // m'th Fibonacci number

    while (fib < n) {
        fibM2 = fibM1;
        fibM1 = fib;
        fib = fibM2 + fibM1;
    }

    int offset = -1;

    while (fib > 1) {
        int i = min(offset + fibM2, n - 1);

        if (arr[i] < key) {
            fib = fibM1;
            fibM1 = fibM2;
            fibM2 = fib - fibM1;
            offset = i;
        } else if (arr[i] > key) {
            fib = fibM2;
            fibM1 = fibM1 - fibM2;
            fibM2 = fib - fibM1;
        } else {
            return i; // Element found at index i
        }
    }

    if (fibM1 && arr[offset + 1] == key) {
        return offset + 1;
    }

    return -1; // Element not found
}

int main() {
    int n, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array in sorted order:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search for: ");
    scanf("%d", &key);

    int result = fibonacciSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
