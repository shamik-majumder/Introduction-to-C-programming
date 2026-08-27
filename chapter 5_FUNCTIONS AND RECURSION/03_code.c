#include <stdio.h>

// Function that takes parameters by pointer
// call by reference using pointers
void func(int *val)
{

    // Changing the value
    *val = 123;
}

int main()
{
    int x = 1;

    // Passing address of x
    func(&x);
    printf("%d", x); // original value of x is changed to 123

    return 0;
}