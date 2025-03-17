#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << (sizeof(int) * 8 - 1)))  // Shift 1 to the MSB position
        printf("MSB is 1\n");
    else
        printf("MSB is 0\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkMSB(num);
    return 0;
}
