#include <stdio.h>

int fact(int n) {
    int f = 1;
  
    while (n > 0) {
        f *= n;
        n--;
    }
    return f;
}

int main() {
  int n;
  printf("Enter a positive integer");
  scanf("%d",&n);
  printf("factorial of %d =%d",n, fact(n));
  return 0;
}
