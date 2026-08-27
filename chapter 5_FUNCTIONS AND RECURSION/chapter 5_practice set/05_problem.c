#include <stdio.h>

// What will the following line produce in a C program: 
// int a = 4; 
// printf("%d %d %d \n", a, ++a, a++)

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);

    /*
    evaluation order of compiler from right to left
    Step 1: a++  => returns 4, a becomes 5
    Step 2: ++a  => a becomes 6, returns 6
    Step 3: a    => returns 6
    Output Explanation:
    a , ++a , a++
    a, ++a, 4  now a = 5
    a, 6, 4 now a = 6
    6, 6, 4
    but the output may vary depending on the compiler
    6 6 4
    4 5 5 is also possible
    */

    return 0;
}