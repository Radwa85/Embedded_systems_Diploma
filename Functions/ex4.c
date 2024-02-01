#include <stdio.h>

int power(int base, int exponent);

int main() {
    int base, exponent;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number (positive integer): ");
    scanf("%d", &exponent);
    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return (base * power(base, exponent - 1));
    }
}
