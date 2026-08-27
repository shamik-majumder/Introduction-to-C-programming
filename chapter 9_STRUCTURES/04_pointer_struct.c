#include <stdio.h>

// Structures can also be accessed using pointers.

struct employee
{
    int code;
    char name[10];
    float salary;
};

int main()
{
    struct employee e1;
    // e1.code = 56;
    struct employee *ptr;
    ptr = &e1; // now we can print structure elements using:
    //(*ptr).code = 56; // here *ptr is the structure variable
    ptr->code = 56; // here -> is known as the arrow operator
    printf("%d", e1.code);
    // printf("%d\n", (*ptr).code);
    // printf("%d\n", ptr->code); // here -> is known as the arrow operator

    return 0;
}