#include <stdio.h>

// Function that takes parameters by value
// call by value
void func(int val)
{

    // Changing the value
    val = 123;
}

int main()
{
    int x = 1;

    // Passing x by value to func()
    func(x);
    printf("%d", x); // original value of x is not changed and remains 1

    return 0;
}