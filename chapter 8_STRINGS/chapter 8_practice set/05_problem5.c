#include <stdio.h>

// check the length of a string without using strlen() function.
// copy a string without using strcpy() function.
// Write your own version of strlen and strcpy functions from <string.h>

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

void mystrcpy(char target[], char str[])
{
    for (int i = 0; i < mystrlen(str); i++)
    {
        target[i] = str[i];
    }
    target[mystrlen(str)] = '\0';
}

int main()
{
    char str[] = "shamik";
    char target[30];
    printf(" The length of the string is: %d\n", mystrlen(str));
    printf(" The copied string is: ");
    mystrcpy(target, str);
    printf("%s", target);
    return 0;
}