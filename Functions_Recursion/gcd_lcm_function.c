// Question: Write a C program to find GCD and LCM using function.
//
// Formula:
// gcd(a, b):
//   if b == 0 -> return a
//   else -> return gcd(b, a % b)
// lcm(a, b) = (a * b) / gcd(a, b)

#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

