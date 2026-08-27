#include <stdio.h>

// Write a program to generate multiplication table of a given number in text
// format. Make sure that the file is readable and well formatted

int main()
{
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    int number = 5;
    fprintf(fptr, "Multiplication Table of %d\n", number);
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d x %d = %d\n", number, i + 1, number * (i + 1));
    }

    fclose(fptr);
    return 0;
}