#include <stdio.h>
#include <string.h>
// This program demonstrates the use of various string functions in C,
// including strlen(), strcpy(), strcat(), and strcmp().
int main()
{
    char str[] = "shamik";
    // strlen() is used to count the number of characters in the string excluding the null (‘\0’) characters.
    printf(" the length of the string is: %d\n", strlen(str));

    char target[30];
    // strcpy() is used to copy the content of second string into first string passed to it.
    strcpy(target, str);
    printf(" the copied string is: %s", target);

    // strcat() is used to concatenate two strings
    char s1[56] = "Shamik";
    char s2[56] = "Majumder";
    strcat(s1, s2);
    printf(" the concatenated string is: %s\n", s1);

    // strcmp()  is used to compare two strings
    int a = strcmp(s1, s2);
    int b = strcmp(s2, s1);
    printf(" the result of comparing s1 and s2 is: %d\n", a);
    printf(" the result of comparing s2 and s1 is: %d\n", b);

    return 0;
}