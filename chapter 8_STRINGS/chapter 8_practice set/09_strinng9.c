#include <stdio.h>
#include <string.h>

// Write a program to check whether a given character is present in a string or not.

int main()
{
    char str[] = "Shamik Majumder";
    char c = 'd'; // Character to check
    int contains = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {
        printf("Yes..! the character is available in the string");
    }
    else
    {
        printf("Sorry..! the character is not available in the string ");
    }

    return 0;
}