#include <stdio.h>
#include <math.h>

void checkMSB(int num) {
    int bits = (int)log2(num) + 1;
    if (num & (1 << (bits - 1)))
        printf("Set\n");
    else
        printf("Not Set\n");
}

int main() {
    int num = 130;
    checkMSB(num);
    return 0;
}
