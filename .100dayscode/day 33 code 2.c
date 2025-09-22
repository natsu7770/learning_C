#include <stdio.h>

int main() {
    int n, i, element, pos;

    // Read size of the array
    scanf("%d", &n);

    int arr[n+1];  // allocate space for one extra element

    // Read the sorted array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to be inserted
    scanf("%d", &element);

    // Find the position where the element should be inserted
    pos = n;  // default position is at the end
    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements from pos to right by 1
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at pos
    arr[pos] = element;

    // Print the updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
