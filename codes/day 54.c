#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int totalSum = (n * (n + 1)) / 2;
    
    int leftSum = 0;
    int pivotInteger = -1;
    for (int x = 1; x <= n; x++) {
        leftSum += x;
        int rightSum = totalSum - leftSum + x;
        if (leftSum == rightSum) {
            pivotInteger = x;
            break;
        }
    }
    printf("%d\n", pivotInteger);
    
    return 0;
}