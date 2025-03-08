#include <stdio.h>

int main() {
    int age, citizen;
    scanf("%d", &age);
    scanf("%d", &citizen);
    if (age >= 18) {
        if (citizen == 1) {
            printf("Eligible");
        } else {
            printf("Not Eligible");
        }
    } else {
        printf("You are not eligible to vote as you are under 18.\n");
    }

    return 0;
}
