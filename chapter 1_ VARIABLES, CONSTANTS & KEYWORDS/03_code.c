//Creating an Identifier for a Function

#include <stdio.h>

// Function declaration which contains user
// defined identifier as it name
int sum(int a, int b)
{
    return a + b;
}

int main()
{

    // Calling the function using its name
    printf("%d", sum(10, 20));
    return 0;
}