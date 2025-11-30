#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%llu\n", factorial);

    return 0;
}