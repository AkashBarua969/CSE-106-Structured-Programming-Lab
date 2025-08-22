// Question: Write a C program to calculate power using recursion.
//
// Formula:
// power(a, b):
//   if b == 0 -> return 1
//   else -> return a * power(a, b-1)

#include <stdio.h>

// Function to calculate power recursively
double power(double base, int exponent) {
    if(exponent == 0)
        return 1;  // base case
    else
        return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent (non-negative integer): ");
    scanf("%d", &exponent);

    if(exponent < 0) {
        printf("This program handles non-negative exponents only.\n");
    } else {
        printf("%.2lf ^ %d = %.2lf\n", base, exponent, power(base, exponent));
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

