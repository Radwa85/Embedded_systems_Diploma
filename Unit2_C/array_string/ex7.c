#include <stdio.h>
#include <string.h>

int main() {
    char a[500], ch;
    int count = 0;

    printf("Enter a string: ");
    gets(a);

    for (int i = 0; i <500; i++) {
        if (a[i] !='\0') {
            count++;
        }
        else {
            break;
        }
    }
    printf("length of string=%d",count);

}