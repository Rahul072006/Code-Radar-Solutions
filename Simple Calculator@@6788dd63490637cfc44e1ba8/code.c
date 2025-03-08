#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    scanf("%f %f %c", &num1, &num2, &op);
    switch(op) {
        case '+': 
            result = num1 + num2;
            printf("%.2f\n");
            break;
        case '-': 
            result = num1 - num2;
            printf("%.2f\n");
            break;
        case '*': 
            result = num1 * num2;
            printf("%.2f\n");
            break;
        case '/': 
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2f\n");
            } else {
                printf("Error\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
