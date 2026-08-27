#include <stdio.h>

// Function definition
// factorial 5! = 1 * 2 * 3 * 4 * 5
// factorial 4! = 1 * 2 * 3 * 4
// factorial 3! = 1 * 2 * 3
// factorial 2! = 1 * 2
// factorial 1! = 1
// factorial 0! = 1  (base condition)
// factorial n! = 1 * 2 * 3 * ... * n-2 * n-1 * n
// factorial n-1! = 1 * 2 * 3 * ... * n-2 * n-1
// factorial n! = factorial (n-1)! * n (recursive condition)

int factorial(int);

int factorial(int n)      //recursive function 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return factorial(n - 1) * n;
}


int main()
{
    int a = 5;
    printf("Factorial of %d is %d\n",a , factorial(a));
    return 0;
}