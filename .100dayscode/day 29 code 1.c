#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}
