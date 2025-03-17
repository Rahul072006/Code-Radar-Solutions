#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << 7))  
        printf("Set\n");
    else
        printf("MSB is 0\n");
}

int main() {
    int num = 130; 
    checkMSB(num);
    return 0;
}
