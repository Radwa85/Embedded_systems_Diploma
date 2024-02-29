#include <stdio.h>

int main() {
    
    char alphabet = 'A'; 
    char* ptr = &alphabet;
    
    printf("The Alphabets are: \n");

    while (*ptr <= 'Z') {
        printf("%c ", *ptr);
        (*ptr)++;
    }

    return 0;
}
