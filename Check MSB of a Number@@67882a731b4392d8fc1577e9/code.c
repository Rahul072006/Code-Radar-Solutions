#include <stdio.h>
#include <math.h>

void checkMSB(int num) {
    int bits = (int)log2(num) + 1; // Find the number of bits
    if (num & (1 << (bits - 1)))
        printf("MSB is 1\n");
    else
        printf("MSB is 0\n");
}

int main() {
    int num = 130;
    checkMSB(num);
    return 0;
}
