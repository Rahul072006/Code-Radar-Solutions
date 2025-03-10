#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input correctly
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid Input\n");
        return 1;
    }

    // Ensuring it prints "True" when both are >= 1
    if (a > 0 && b > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
