#include <stdio.h>

int main() {
    int num;
    printf("Enter the number of range: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    return 0;
}
