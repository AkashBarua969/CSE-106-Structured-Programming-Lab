// Question: Write a C program to calculate simple interest and compound interest.
//
// Formula:
// Simple Interest (SI) = (P × R × T) / 100
// Compound Interest (CI) = P × (1 + R/100)^T – P

#include <stdio.h>   // input-output library
#include <math.h>    // pow() function এর জন্য (compound interest এ দরকার)

int main() {
    float P, R, T;   // Principal, Rate, Time
    float SI, CI;    // Simple Interest, Compound Interest

    // ইউজার থেকে ইনপুট নেয়া হচ্ছে
    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    // Simple Interest বের করা
    SI = (P * R * T) / 100;

    // Compound Interest বের করা
    CI = P * pow((1 + R / 100), T) - P;

    // ফলাফল দেখানো হচ্ছে
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

