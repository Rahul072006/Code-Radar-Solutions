#include <stdio.h>

int main() {
    int a, b;

    // Taking input
    printf("Enter the number a: ");
    scanf("%d", &a);
    
    printf("Enter the number b: ");
    scanf("%d", &b);

    // Handling division by zero case
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (a % b == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}