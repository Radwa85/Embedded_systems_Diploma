#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Enter rows and columns of matrix: ");
    scanf("%d%d", &x, &y);

    int a[x][y], b[y][x];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Entered Matrix:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of Matrix:\n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
