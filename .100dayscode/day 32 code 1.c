#include <stdio.h>

int main() {
    int n1, n2;
    
    // Read size of first array
    scanf("%d", &n1);
    int arr1[n1];
    
    // Read elements of first array
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Read size of second array
    scanf("%d", &n2);
    int arr2[n2];
    
    // Read elements of second array
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Print merged array
    for(int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for(int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}
