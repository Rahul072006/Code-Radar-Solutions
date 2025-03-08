#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (b == 0) {
        printf("Division by zero is not allowed.\n");
    } else if (a % b == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}