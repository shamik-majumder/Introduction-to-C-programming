#include <stdio.h>
// Strings in C are represented as arrays of 
//characters terminated by a null character '\0'.

int main()
{
    // char str[] = {'a', 'b', 'c', '\0'};
    char str[] = "abc"; // same as doing str[] = {'a', 'b', 'c', '\0'};
                        /*
                        for (int i = 0; i < 3; i++)
                        {
                            printf("%c", str[i]);
                        }*/

    printf("%s", str); //%s format specifier for strings

    return 0;
}