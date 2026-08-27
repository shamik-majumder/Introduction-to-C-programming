#include <stdio.h>

// Write a program to read a text file character by character and write its content
// twice in separate file.

int main()
{
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("shamik.txt", "r");
    ptr2 = fopen("shamik_3.txt", "a");
    char ch;
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    return 0;
}