#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = (n * (n + 1)) / 2;  // Correct formula for sum

    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}
