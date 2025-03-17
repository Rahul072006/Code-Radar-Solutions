#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << (sizeof(int) * 8 - 1)))  // Shift 1 to the MSB position
        printf("Set\n");
    else
        printf("MSB is 0\n");
}

int main() {
    int num;
    scanf("%d", &num);
    checkMSB(num);
    return 0;
}
