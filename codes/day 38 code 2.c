#include <stdio.h>
#include <stdbool.h> // For using bool type in C

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    if (n != m) {
        // A symmetric matrix must be square
        printf("False\n");
        return 0;
    }

    int matrix[n][m];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Check if element at (i,j) is equal to element at (j,i)
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
