#include <stdio.h>

struct scomplex {
    double real;
    double img;
} x, y, z;

struct scomplex add(struct scomplex x, struct scomplex y);
void display_addition(struct scomplex z);

int main() {
    printf("For the 1st complex number\nEnter real and imaginary respectively: ");
    scanf("%lf %lf", &x.real, &x.img);

    printf("For the 2nd complex number\nEnter real and imaginary respectively: ");
    scanf("%lf %lf", &y.real, &y.img);

    z = add(x, y);
    display_addition(z);

    return 0;
}

struct scomplex add(struct scomplex x, struct scomplex y) {
    struct scomplex result;
    result.real = x.real + y.real;
    result.img = x.img + y.img;
    return result;
}

void display_addition(struct scomplex z) {
    printf("%.1lf + %.1lfi", z.real, z.img);
}


