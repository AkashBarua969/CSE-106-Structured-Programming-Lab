// Question: Write a C program to find the transpose of a matrix.
//
// Formula:
// transpose[i][j] = matrix[j][i]

#include <stdio.h>   // input-output library

int main() {
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c], transpose[c][r];

    // matrix input
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("matrix[%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // transpose calculation
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // print transpose matrix
    printf("Transpose of the matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}
