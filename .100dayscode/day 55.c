#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int pivotInteger = -1;
    for (int x = 1; x <= n; x++) {

        int leftSum = (x * (x + 1)) / 2;
        int totalSum = (n * (n + 1)) / 2;
        int sumBefore = ((x - 1) * x) / 2;
        int rightSum = totalSum - sumBefore;
        if (leftSum == rightSum) {
            pivotInteger = x;
            break;
        }
    }
    printf("%d\n", pivotInteger);
    
    return 0;
}