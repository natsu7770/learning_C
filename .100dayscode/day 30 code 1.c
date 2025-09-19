#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read the elements of the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Count even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    
    // Print the result
    printf("Even=%d, Odd=%d\n", evenCount, oddCount);
    
    return 0;
}
