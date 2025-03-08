#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    scanf("%f %f %c", &num1, &num2, &op);
    switch(op) {
        case '+': 
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/': 
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            return 0;
    }
    if (result == (int)result) {
        printf("%d\n", (int)result);
    } else {
        printf("%f\n", result);
    }

    return 0;
}
