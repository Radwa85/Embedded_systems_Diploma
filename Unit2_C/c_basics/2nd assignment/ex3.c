#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);

    float largest = (a > b && a > c) ? a : ((b > c) ? b : c);

    printf("The largest number is %.2f\n", largest);

    return 0;
}
