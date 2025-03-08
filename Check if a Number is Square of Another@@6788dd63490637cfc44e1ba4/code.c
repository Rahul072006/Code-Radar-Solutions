#include <stdio.h>

int main() {
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0 || num < 0) { // Always true, just demonstrating if-else usage
        square = num * num;
        printf("Yes");
    } else {
        printf("No"); // This case will never execute
    }

    return 0;
}
