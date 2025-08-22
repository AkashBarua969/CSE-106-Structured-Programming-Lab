// Question: Write a C program to evaluate arithmetic expressions using two numbers and an operator.
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
    scanf(" %c", &op);  // note: scanf এ " %c" এ space দেয়া আছে, যাতে আগের newline skip হয়

    printf("Enter second number: ");
    scanf("%f", &num2);

    // arithmetic operation নির্ণয়
    if(op == '+') {
        result = num1 + num2;
    }
    else if(op == '-') {
        result = num1 - num2;
    }
    else if(op == '*') {
        result = num1 * num2;
    }
    else if(op == '/') {
        if(num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;  // প্রোগ্রাম error exit
        }
    }
    else {
        printf("Error: Invalid operator.\n");
        return 1;  // প্রোগ্রাম error exit
    }

    // ফলাফল দেখানো
    printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

