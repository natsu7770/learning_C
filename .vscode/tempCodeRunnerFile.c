#include <stdio.h>
int main() {
    float a, b, c;
    float discriminant;
    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        printf("Roots are real and different\n");
    } else if (discriminant == 0) {
        printf("Roots are real and same\n");
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}