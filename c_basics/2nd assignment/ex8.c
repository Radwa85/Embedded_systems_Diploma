#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;
    printf("Enter an operator (+ , -, * or /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.1f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.1f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.1f\n", result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.1f\n", result);
            } else {
                printf("Error!!\n");
            }
            break;
        default:
            printf("Error!! Invalid operator\n");
            break;
    }

    return 0;
}


