//Block Scoped Local Variables

// C Program to demonstrate
// Block Scoped Local variables
#include <stdio.h>

// Driver Function
int main()
{
    // declaration of x variable outside the block
    int x = 15;

    // Block is defined here
    {
        // Block scoped variable "x"
        int x = 25;
        printf("x was declared in the block: %d \n", x);
    }

    // prints 15 that was declared outside
    printf("x outside the block: %d", x);
  
    return 0;
}