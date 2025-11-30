#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, zero = 0;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    // Print the result
    printf("Positive=%d, Negative=%d, Zero=%d\n", positive, negative, zero);

    return 0;
}
