#include <stdio.h>

// Demonstrates call by reference in C

int sum(int *, int *); // function prototype

// sum function should change the values of a and b to demonstrate call by reference

int sum(int *a, int *b) // call by reference function definition
{
    *a = 6;         // changing the value at the address pointed to by a
    *b = 7;         // changing the value at the address pointed to by b
    return *a + *b; // return the sum of the values at the addresses pointed to by a and b
}

int main()
{
    int x = 4, y = 5;
    //& operator is used to pass the address of variables x and y
    printf(" the sum is %d\n", sum(&x, &y)); // call by reference function call
    printf(" the value of x is %d\n", x);    // x should now be 6
    printf(" the value of y is %d\n", y);    // y should now be 7
    // printf(" the sum is %d\n", sum(4, 5));
    return 0;
}