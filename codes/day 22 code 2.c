#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Read number of terms
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= n; i++) {
        // For the first term denominator is 1, then it increases by 2
        if (i == 1) {
            denominator = 1;
        } else {
            denominator += 2;
        }

        sum += (double)numerator / denominator;

        numerator += 2;
    }

    printf("Approximate sum: %.1lf\n", sum);

    return 0;
}
