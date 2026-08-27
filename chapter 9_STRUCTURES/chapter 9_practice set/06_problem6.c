#include <stdio.h>

//  Create an array of 5 complex numbers created in a structure representing 
// a complex number and display them 
// with the help of a display function. The values must be taken as an input from 
// the user  using ‘typedef’ keywords. 

typedef struct ComplexNumber
{
    int real;
    int imaginary;
} cplx;

void diplay(cplx Z)
{
    printf("The value of the complex numbers \n %d + %di\n", Z.real, Z.imaginary);
}

int main()
{
    cplx Z[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter the real parts of the complex numbers:\n");
        scanf("%d", &Z[i].real);
        printf("enter the imaginary parts of the  complex numbers:\n");
        scanf("%d", &Z[i].imaginary);
        diplay(Z[i]);
    }

    return 0;
}