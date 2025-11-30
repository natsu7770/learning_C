#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // Assuming maximum size of array is 100

    // Input number of elements
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find max and min in the array
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the result
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
