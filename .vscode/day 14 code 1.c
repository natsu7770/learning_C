#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of odd numbers to sum
    printf("Enter n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers is n*n
    sum = n * n;

    printf("%d\n", sum);

    return 0;
}