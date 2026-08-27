#include <stdio.h>

// This code will cause a compilation error
// because ptr is a constant pointer and cannot be reassigned
// to point to another variable (b in this case).

int main()
{
    int a = 90;
    int b = 50;

    // Creating a constant pointer
    int *const ptr = &a;

    // Trying to reassign it to b
    ptr = &b;

    return 0;
}