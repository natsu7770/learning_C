#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;  // In case k is greater than n
    int temp[n];

    // Copy last k elements to the beginning of temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy first n-k elements after them
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    // Copy temp back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    rotateRight(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
