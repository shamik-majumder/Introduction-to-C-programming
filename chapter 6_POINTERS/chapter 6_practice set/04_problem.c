#include <stdio.h>

// Write a function and pass the value by reference. 

int refference_example(int *);

int refference_example(int *a)
{
    *a = *a + 10;
    printf(" the updated value of i inside the function is %d\n", *a);
    return *a;
}

int main()
{
    int i = 20;
    printf(" the current value of i is %d\n", i);
    refference_example(&i);

    return 0;
}