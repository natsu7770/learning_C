#include <stdio.h>

int main() {
    int n, i, pos, val;
    int arr[100];  // Assuming max size 100 for simplicity

    // Read number of elements
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and value to insert
    scanf("%d %d", &pos, &val);

    // Shift elements from position onwards to the right
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert new value
    arr[pos-1] = val;

    // Increase array size
    n++;

    // Print the array
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
