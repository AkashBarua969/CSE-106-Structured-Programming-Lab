// Question: Write a C program to add two distances (in feet and inches) using structures.

#include <stdio.h>

// Structure to store distance
struct Distance {
    int feet;
    float inches;
};

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    // Input second distance
    printf("Enter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    // Add distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // Convert inches to feet if ≥ 12
    if(sum.inches >= 12.0) {
        sum.feet += (int)(sum.inches / 12);
        sum.inches = fmod(sum.inches, 12.0);  // fractional part of inches
    }

    // Display result
    printf("\nSum of distances = %d feet %.2f inches\n", sum.feet, sum.inches);

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

