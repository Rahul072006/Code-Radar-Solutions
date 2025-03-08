#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    // Input two numbers and the operator
    printf("Enter two numbers and an operator (e.g., 5 3 +): ");
    scanf("%f %f %c", &num1, &num2, &op);

    // Perform the operation based on input operator
    switch(op) {
        case '+': 
            result = num1 + num2;
            printf("%.2f\n", result);
            break;
        case '-': 
            result = num1 - num2;
            printf("%.2f\n", result);
            break;
        case '*': 
            result = num1 * num2;
            printf("%.2f\n", result);
            break;
        case '/': 
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
