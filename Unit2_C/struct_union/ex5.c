#include <stdio.h>


#define AREA(radius) (3.14159265359 * (radius) * (radius))

int main() {
    double radius, area;


    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = AREA(radius);


    printf("Area = %.2f\n", area);

    return 0;
}



