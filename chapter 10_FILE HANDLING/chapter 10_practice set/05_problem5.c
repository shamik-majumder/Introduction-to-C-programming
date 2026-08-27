#include <stdio.h>

// Write a program to modify a file containing an integer to double its value.

int main()
{
    FILE *fptr;
    int num;
    fptr = fopen("int.txt", "r");
    fscanf(fptr, "%d", &num);
    fclose(fptr);

    fptr = fopen("double.txt", "w");
    fprintf(fptr, "%d", num * 2);
    fclose(fptr);
    return 0;
}