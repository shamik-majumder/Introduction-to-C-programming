#include <stdio.h>
// Demonstrates call by value in C

int sum(int, int);

int sum(int a, int b) // call by value function definition
{
    return a + b;
}

int main()
{
    int x = 4, y = 5;
    printf(" the sum is %d\n", sum(x, y)); // call by value function call
    printf(" the sum is %d\n", sum(4, 5));
    return 0;
}