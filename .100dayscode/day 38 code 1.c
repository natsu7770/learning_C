#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int i, j;

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    int matrix1[r1][c1];

    // Read elements of first matrix
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    int matrix2[r2][c2];

    // Read elements of second matrix
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Check if matrices can be added
    if(r1 != r2 || c1 != c2) {
        printf("Matrices cannot be added due to different dimensions.\n");
        return 1;
    }

    // Add matrices and print result
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
