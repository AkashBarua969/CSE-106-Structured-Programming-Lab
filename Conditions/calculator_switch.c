// Question: Write a C program to use switch-case for a simple calculator.
//
// Formula:
// Addition       : a + b
// Subtraction    : a - b
// Multiplication : a * b
// Division       : a / b

#include <stdio.h>   // input-output library

int main() {
    float num1, num2, result;
    char op;  // operator: +, -, *, /

    // ইউজার থেকে ইনপুট নেয়া
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to skip newline

    printf("Enter second number: ");
    scanf("%f", &num2);

    // switch-case ব্যবহার করে calculation
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

