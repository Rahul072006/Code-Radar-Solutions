#include <stdio.h>

void printEvenIndexed(int arr[], int n) {
    for (int i = 1; i < n; i += 2) { // Start from index 1 and increment by 2
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    printEvenIndexed(arr, n);

    return 0;
}
