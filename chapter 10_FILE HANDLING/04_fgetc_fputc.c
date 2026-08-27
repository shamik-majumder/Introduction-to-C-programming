#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("shamik_1.txt", "a");
    char ch = fgetc(fptr); // used to read a character from file
    printf("%c", ch);

    //fputc('c', fptr); // used to write character 'c' to the file
    return 0;
}