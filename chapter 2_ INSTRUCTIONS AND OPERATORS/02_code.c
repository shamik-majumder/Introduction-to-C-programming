// Arithmetic Operators

#include <stdio.h>

int main()
{

    int a = 25, b = 5;

    // using operators and printing results
    printf("a + b = %d\n", a + b);  // addition
    printf("a - b = %d\n", a - b);  // subtraction
    printf("a * b = %d\n", a * b);  // multiplication
    printf("a / b = %d\n", a / b);  // division
    printf("a %% b = %d\n", a % b); // modulus
    printf("+a = %d\n", +a);        // unary plus
    printf("-a = %d\n", -a);        // unary minus
    printf("++a = %d\n", ++a);      // pre-increment
    printf("a = %d\n", a);          // value of a after pre-increment
    printf("a++ = %d\n", a++);      // post-increment
    printf("--a = %d\n", --a);      // pre-decrement
    printf("a = %d\n", a);          // value of a after pre-decrement
    printf("a++ = %d\n", a++);      // post-increment
    printf("a = %d\n", a);          // value of a after post-increment
    printf("a-- = %d\n", a--);      // post-decrement
    printf("a = %d\n", a);          // value of a after post-decrement
    printf("--a = %d\n", --a);      // pre-decrement
    printf("a = %d\n", a);          // value of a after pre-decrement
    printf("++a = %d\n", ++a);      // pre-increment
    printf("a = %d\n", a);          // value of a after pre-increment

    return 0;
}