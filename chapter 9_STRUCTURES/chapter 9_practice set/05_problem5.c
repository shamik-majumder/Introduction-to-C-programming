#include <stdio.h>

// Write a program with a structure representing a complex number

typedef struct ComplexNumber
{
    int real;
    int imaginary;
} cplx;

int main()
{
    cplx Z;
    Z.real = 2;
    Z.imaginary = 3;

    printf("The value of the compex number is %d + %di\n", Z.real, Z.imaginary);

    return 0;
}