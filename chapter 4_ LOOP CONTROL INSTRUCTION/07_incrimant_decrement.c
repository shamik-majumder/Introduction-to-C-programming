#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i is %d\n", i);
    i = i + 5;
    printf("the value of i is %d\n", i);

    printf("the value of i is %d\n", i++); // post-increment operator = print the value, then increment i++
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", ++i); // pre-increment operator = increment first, then print the value ++i
    printf("the value of i is %d\n", i);

    printf("the value of i is %d\n", i--); // post-decrement operator = print the value, then decrement i--
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", --i); // pre-decrement operator = decrement first, then print the value --i
    printf("the value of i is %d\n", i);
    
    i += 2;
    printf(" the value of i is %d\n", i);

    return 0;
}