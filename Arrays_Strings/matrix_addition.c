// Question: Write a C program to add two matrices.
//
// Formula:
// For each element [i][j]:
//   sum[i][j] = mat1[i][j] + mat2[i][j]

#include <stdio.h>   // input-output library

int main() {
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], sum[r][c];

    // matrix 1 input
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("mat1[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // matrix 2 input
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("mat2[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // matrix addition
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // print sum matrix
    printf("Sum of the two matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

