#include <stdio.h>

int main() {
    int num, square;
    scanf("%d", &num);
    if (num >= 0 || num < 0) { 
        square = num * num;
        printf("Yes");
    } else {
        printf("No"); 
    }

    return 0;
}
