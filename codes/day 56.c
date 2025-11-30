#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int majorityElement = -1;
    int majorityThreshold = n / 2;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > majorityThreshold) {
            majorityElement = nums[i];
            break;
        }
    printf("%d\n", majorityElement);
    
    return 0;
}