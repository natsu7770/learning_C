#include <stdio.h>

int main() {
    int n, i, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements left from pos to end of array
    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the array after deletion
    for(i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
