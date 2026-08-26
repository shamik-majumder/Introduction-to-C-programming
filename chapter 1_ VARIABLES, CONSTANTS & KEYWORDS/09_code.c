// Scope rules in C

#include <stdio.h>

int main()
{
    // Scope of this variable is
    // within main() function only.
    int var = 34;

    printf("%d", var);
    return 0;
}

// function where we try to access
// the var defined in main()
void func()
{
    // This will throw an error as var is not
    // defined in this function.
    printf("%d", var);
}