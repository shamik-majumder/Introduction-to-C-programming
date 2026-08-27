// C Program to demonstrate the use of Misc operators
#include <stdio.h>

int main()
{
    // integer variable
    int num = 10;
    int *add_of_num = &num;

    printf("sizeof(num) = %d bytes\n", sizeof(num));  // sizeof operator
    printf("&num = %p\n", &num);                     // address of operator
    printf("*add_of_num = %d\n", *add_of_num);         // dereference operator
    printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);  // conditional ternary operator
    printf("(float)num = %f\n", (float)num);              // type casting operator

    return 0;
}