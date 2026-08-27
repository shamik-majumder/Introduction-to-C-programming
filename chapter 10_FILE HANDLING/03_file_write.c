#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("shamik.txt", "w");
    int num = 32;
    fprintf(fptr, "%d", num);

    fclose(fptr);

    return 0;
}