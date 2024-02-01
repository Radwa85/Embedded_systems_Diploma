#include <stdio.h>
#include <string.h>

int main() {
    char a[100], ch;
    int count = 0;

    printf("Enter a string: ");
    gets(a);

    printf("Enter a character to find frequency: ");
    scanf(" %c", &ch);

    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == ch) {
            count++;
        }
    }

    if (count > 0) {
        printf("Frequency of '%c' = %d\n", ch, count);
    } else {
        printf("Character not found in the string.\n");
    }

    return 0;
}
