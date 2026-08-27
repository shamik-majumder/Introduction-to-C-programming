#include <stdio.h>
#include <math.h>

int main()
{
    float a, area;

    printf("Enter the side of the square: ");
    scanf("%f", &a);

    area = pow(a, 2); // Using library function pow()

    printf("Area of the square: %.2f\n", area);

    return 0;
}
