#include <stdio.h>

// Function to print even and odd numbers separately
void separateEvenOdd(int arr[], int n) {
    printf("Even numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ",
