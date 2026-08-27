#include <stdio.h>

// chceck the length of a string without using strlen() function.
// write your own version of strlen function from <string.h>

int mystrlen(char str[])
{
    int i = 0, count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }

    count = i - 1;
    return count;
}

int main()
{
    char str[] = "Shamik";

    printf(" The length of the string is: %d", mystrlen(str));
    return 0;
}