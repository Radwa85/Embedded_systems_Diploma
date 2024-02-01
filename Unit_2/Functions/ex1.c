#include <stdio.h>

int isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void printPrimes(int x, int y) {
    printf("Prime numbers between %d and %d are: ", x, y);
    for (int i = x; i <= y; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int x, y;

    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);

    printPrimes(x, y);

    return 0;
}
