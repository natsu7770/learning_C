#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index where target is found
        }
    }
    return -1;  // Target not found
}

int main() {
    int n, target;
    
    // Input size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Input elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to search
    scanf("%d", &target);
    
    // Perform linear search
    int result = linearSearch(arr, n, target);
    
    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("-1\n");
    
    return 0;
}