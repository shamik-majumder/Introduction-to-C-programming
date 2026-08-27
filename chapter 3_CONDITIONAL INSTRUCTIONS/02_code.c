// Logical Operators in C

#include <stdio.h>
int main()
{
    int a = 4, b = 20;

    if (a > 5 && b > 5)  //Logical AND Operator ( && )
    {
        printf("Both values are greater than 5\n");
    }
    if (a > 0 || b > 0)  //Logical OR Operator ( || )
    {
        printf("At least one value is greater than 5\n");
    }
    if (!(a > 0 && b > 0))  // condition returned true but Logical NOT operator changed it to false
    {
        printf("Both values are greater than 5\n");
    }
    else
    {
        printf("Both values are less than 5\n");
    }
    return 0;
}