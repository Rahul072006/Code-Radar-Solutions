#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << 7))  
        printf("MSB is 1\n");
    else
        printf("MSB is 0\n");
}

int main() {
    int num = 130; 
    checkMSB(num);
    return 0;
}
