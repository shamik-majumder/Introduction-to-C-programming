//Changing Stored Values in a variable

#include <stdio.h>

int main()
{

    // initial value
    int number = 10;
    printf("Initial value: %d\n", number);

    // updating value
    number = 25;
    printf("Updated value: %d\n", number);

    // updating again using expression
    number = number + 5;
    printf("After adding 5: %d\n", number);

    return 0;
}