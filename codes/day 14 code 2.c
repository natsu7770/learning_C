#include <stdio.h>

int main() {
    int n, product = 1;
    int i;

    // Input the value of n
    printf("Enter n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d\n", product);

    return 0;
}