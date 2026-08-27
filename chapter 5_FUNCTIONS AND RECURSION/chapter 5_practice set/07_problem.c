#include <stdio.h>

/*

Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
* * * * * * *

*/

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // this loop runs from 0 to 2
        // if i = 0 , print 1 star  *
        // if i = 1 , print 3 stars * * *
        // if i = 2 , print 5 stars * * * * *
        // if i = 3 , print 7 stars * * * * * * *
        // number of stars to be printed in each row = (2*i + 1)
        for (int j = 0; j < (2 * i + 1); j++)
        {
            printf("* ");
        }
        printf("\n");  // move to the next line after each row
    }

    return 0;
}