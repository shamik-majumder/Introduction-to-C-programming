// Assignment Operators

#include <stdio.h>

int main()
{
    int a = 25, b = 5;

    // using operators and printing results
    printf("a = b: %d\n", a = b); // Assignment
    // a=b assigns the value of b to a, so a becomes 5
    printf("a : %d\n", a);          // Print current value of a
    printf("a += b: %d\n", a += b); // Addition assignment
    // a+=b is equivalent to a = a + b
    printf("a : %d\n", a);          // Print current value of a
    printf("a -= b: %d\n", a -= b); // Subtraction assignment
    // a-=b is equivalent to a = a - b
    printf("a : %d\n", a);          // Print current value of a
    printf("a *= b: %d\n", a *= b); // Multiplication assignment
    // a*=b is equivalent to a = a * b
    printf("a : %d\n", a);          // Print current value of a
    printf("a /= b: %d\n", a /= b); // Division assignment
    // a/=b is equivalent to a = a / b
    printf("a : %d\n", a);           // Print current value of a
    printf("a %%= b: %d\n", a %= b); // Modulus assignment
    // a%=b is equivalent to a = a % b
    printf("a : %d\n", a);          // Print current value of a
    printf("a &= b: %d\n", a &= b); // Bitwise AND assignment
    // a&=b is equivalent to a = a & b
    printf("a |= b: %d\n", a |= b); // Bitwise OR assignment
    // a|=b is equivalent to a = a | b
    printf("a ^= b: %d\n", a ^= b); // Bitwise XOR assignment
    // a^=b is equivalent to a = a ^ b
    printf("a >>= b: %d\n", a >>= b); // Right shift assignment
    // a>>=b is equivalent to a = a >> b
    printf("a <<= b: %d\n", a <<= b); // Left shift assignment
    // a<<=b is equivalent to a = a << b

    return 0;
}