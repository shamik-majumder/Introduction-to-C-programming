#include <stdio.h>
#include <string.h>

// Write a program to count the occurrence of a given character in a string.

int main()
{
    char str[] = "Shamik Majumder";
    char c = 'm'; // Character to count
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }

    printf("the number of occurrences of '%c' in the string is: %d", c, count);

    return 0;
}