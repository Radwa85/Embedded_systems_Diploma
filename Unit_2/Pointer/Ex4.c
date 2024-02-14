#include <stdio.h>

#define MAX_SIZE 15

int main() {
    int arr[MAX_SIZE];
    int n, i;
    int *ptr;

    printf("Input the number of elements to store in the array (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid input size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Input %d number of elements in the array:\n", n);
    ptr = arr;
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    printf("\nThe elements of array in reverse order are:\n");
    ptr--;
    for (i = n; i > 0; i--) {
        printf("element - %d : %d\n", i, *ptr);
        ptr--;
    }

    return 0;
}