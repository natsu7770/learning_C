#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int line = 1; line <= (rows + cols - 1); line++) {
        int start_col = (line <= rows) ? 1 : (line - rows + 1);
        int count = (line <= cols) ? line : cols;

        for (int j = start_col; j <= count; j++) {
            int i = line - j + 1;
            if (i <= rows && j <= cols)
                printf("%d ", matrix[i-1][j-1]);
        }
    }

    return 0;
}