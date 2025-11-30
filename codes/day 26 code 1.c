#include <stdio.h>

int main() {
    int rows = 5;
    int i;

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Demonstrate variable scope with code blocks
        int j;
        for (j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }

        // Variable declared in a block
        {
            int blockVar = 100;
            printf(" blockVar inside block: %d", blockVar);
        }
        // Removed this line to avoid error:
        // printf(" blockVar outside block: %d", blockVar);

        printf("\n");
    }

    return 0;
}

