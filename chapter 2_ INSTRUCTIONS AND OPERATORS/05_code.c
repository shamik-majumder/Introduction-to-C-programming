// Bitwise Operators

#include <stdio.h>

int main()
{
    int a = 16, b = 8;

    // using operators and printing results
    printf("a & b: %d\n", a & b);   // Bitwise AND
    printf("a | b: %d\n", a | b);   // Bitwise OR
    printf("a ^ b: %d\n", a ^ b);   // Bitwise XOR
    printf("~a: %d\n", ~a);         // Bitwise NOT
    printf("a >> b: %d\n", a >> b); // Right shift
    printf("a << b: %d\n", a << b); // Left shift

    return 0;
}