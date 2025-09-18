#include <stdio.h>

int main() {
    int num, sum = 0;

    // Read input number
    scanf("%d", &num);

    // Calculate sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if sum equals the number
    if (sum == num && num != 0) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}
