#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j, k;

    // Input dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    int mat1[r1][c1];

    // Input elements of first matrix
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    int mat2[r2][c2];

    // Input elements of second matrix
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int result[r1][c2];

    // Initialize result matrix to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the result matrix
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
