// conditional operator in C
/*
variable = Expression1 ? Expression2 : Expression3;
variable = (condition) ? Expression2 : Expression3;
(condition) ? (variable = Expression2) : (variable = Expression3);
*/

// C program to find largest among two
// numbers using ternary operator

#include <stdio.h>

int main()
{
    int m = 5, n = 4;

    (m > n) ? printf("m is greater than n that is %d > %d",
                     m, n)
            : printf("n is greater than m that is %d > %d",
                     n, m);

    return 0;
}