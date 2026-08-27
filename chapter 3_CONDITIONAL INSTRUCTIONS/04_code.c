// Assignment Operators in C

#include <stdio.h>

int main()
{
    int a = 25, b = 5;

    // using operators and printing results
    printf("a = b: %d\n", a = b); // simple assignment the value of b is assigned to a
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("a += b: %d\n", a += b); // add AND assignment   a = a + b
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("a -= b: %d\n", a -= b);   // subtract AND assignment a = a - b
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("a *= b: %d\n", a *= b);   // multiply AND assignment a = a * b
    printf("a: %d\n", a); 
    printf("b: %d\n", b);      
    printf("a /= b: %d\n", a /= b);   // divide AND assignment a = a / b
    printf("a: %d\n", a);
    printf("b: %d\n", b);    
    printf("a %%= b: %d\n", a %= b);  // modulus AND assignment a = a % b
    printf("a &= b: %d\n", a &= b);   // bitwise AND AND assignment a = a & b
    printf("a |= b: %d\n", a |= b);   // bitwise OR AND assignment a = a | b
    printf("a ^= b: %d\n", a ^= b);   // bitwise XOR AND assignment a = a ^ b
    printf("a >>= b: %d\n", a >>= b); // right shift AND assignment a = a >> b
    printf("a <<= b: %d\n", a <<= b); // left shift AND assignment a = a << b

    return 0;
}