// Question: Write a C program to print patterns (stars, numbers, pyramids).

#include <stdio.h>   // input-output library

int main() {
    int i, j, n;

    printf("Enter the number of rows for patterns: ");
    scanf("%d", &n);

    printf("\n--- Star Pattern ---\n");
    for(i = 1; i <= n; i++) {       // row
        for(j = 1; j <= i; j++) {   // column
            printf("* ");
        }
        printf("\n");
    }

    printf("\n--- Number Pattern ---\n");
    for(i = 1; i <= n; i++) {       // row
        for(j = 1; j <= i; j++) {   // column
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n--- Pyramid Pattern ---\n");
    for(i = 1; i <= n; i++) {
        // spaces
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

