#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i <= n - k; i++) {
        int maxElement = arr[i];
        for (int j = i; j < i + k; j++) {
            if (arr[j] > maxElement) {
                maxElement = arr[j];
            }
        }
        if (i == 0) {
            printf("%d", maxElement);
        } else {
            printf(" %d", maxElement);
        }
    }
    
    printf("\n");
    
    return 0;
}