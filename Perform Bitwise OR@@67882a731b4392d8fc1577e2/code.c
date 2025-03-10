#include <stdio.h>

int main() {
    int a, b, result;

    // Taking input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Performing bitwise OR
    result = a | b;

    // Printing the result
    printf("Bitwise OR of %d and %d is: %d\n", a, b, result);

    return 0;
}
