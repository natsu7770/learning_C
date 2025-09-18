#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n); // Read number of elements

    int arr[n]; // Declare array of size n

    // Read n elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the elements
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
