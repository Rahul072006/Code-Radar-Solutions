#include <stdio.h>

int main() {
    int rows, j, i, space;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
          for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
      
        printf("\n"); 
    }

    return 0;
}
