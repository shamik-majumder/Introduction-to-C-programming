//Local Variable in C

// C Program to demonstrate
// Function SCoped Local Variables
#include <stdio.h>

// Function declared
void gfg()
{
    // localVar is a local variable of
    // gfg function
    int localVar = 10;

    printf("The value of localVar is %d\n", localVar);
}

// Main Function
int main()
{
    gfg();
    return 0;
}