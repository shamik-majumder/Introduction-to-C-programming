#include <stdio.h>

int main()
{
    int a = 3;
    int b = 2;
    int c = a + b;
    printf("the value of a is %d and the value of b is %d and sum is %d\n", a, b, c);
    // Modulus operator "%" is used to get the remainder
    printf("the remainder when a is divided by b is : %d\n", a % b);

    // this doesnt work for exponentiation in c
    // int d = a^b;

    return 0;
}