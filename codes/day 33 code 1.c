#include <stdio.h>

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;  // Element found at index mid
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Element not found
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int result = binarySearch(arr, n, x);
    if (result != -1) {
        printf("Found at index %d\n", result + 1);  // +1 to match 1-based indexing output if needed
    } else {
        printf("-1\n");
    }

    return 0;
}
