// Question: Write a C program to multiply two matrices.
//
// Formula:
// result[i][j] = sum of (mat1[i][k] * mat2[k][j]) for k=0 to c1-1

#include <stdio.h>   // input-output library

int main() {
    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], product[r1][c2];

    // first matrix input
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("mat1[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }

    // second matrix input
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("mat2[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }

    // initialize product matrix to 0
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    // matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // print product matrix
    printf("Product of the two matrices:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;  // প্রোগ্রাম সফলভাবে শেষ
}

