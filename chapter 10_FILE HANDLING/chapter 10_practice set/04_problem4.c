#include <stdio.h>

// Take name and salary of two employees as input from the user and write them to
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

int main()
{
    FILE *fptr;
    fptr = fopen("salary.txt", "w");

    char name1[34], name2[34];
    int salary1, salary2;

    printf("Enter the name of the Employee \n");
    scanf("%s", name1);
    printf("Enter the salary of the Employee \n");
    scanf("%d", &salary1);
    printf("Enter the name of the Employee \n");
    scanf("%s", name2);
    printf("Enter the salary of the Employee\n");
    scanf("%d", &salary2);

    fprintf(fptr, "i. %s, %d\n", name1, salary1);
    fprintf(fptr, "ii. %s, %d\n", name2, salary2);
    fclose(fptr);

    return 0;
}