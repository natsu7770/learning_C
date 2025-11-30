#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = arr[0];
    int secondLargest = -2147483648;  // Minimum possible int value
    
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if(secondLargest == -2147483648) {
        printf("No second largest element found.\n");
    } else {
        printf("%d\n", secondLargest);
    }
    
    return 0;
}
