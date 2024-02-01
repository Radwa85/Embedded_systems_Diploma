#include <stdio.h>

int main() {
    int e, n, i;

    printf("\nEnter no of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter the values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &e);

    i = 0;

    while (i < n && e != a[i]) {
        i++;
    }

    if (i < n) {
        printf("Number found at the location = %d", i + 1);
    } else {
        printf("Number not found");
    }

    return 0;
}
