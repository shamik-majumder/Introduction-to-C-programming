#include <stdio.h>
// Demonstrates pointer to pointer in C

int main()
{
    int i = 6;    // normal integer variable
    int* j = &i;  // pointer to integer variable i
    int** k = &j; // pointer to pointer to integer

    printf(" the value of i is %d\n", i);       // direct access to i
    printf(" the value of i is %d\n", *j);      // access to i via pointer j
    printf(" the value of i is %d\n", **k);     // access to i via pointer k
    printf(" the value of i is %d\n", *(&i));   // access to i via its address
    printf(" the value of i is %d\n", **(&j));  // access to i via pointer j's address
    printf(" the value of i is %d\n", ***(&k)); // access to i via pointer k's address

    return 0;
}