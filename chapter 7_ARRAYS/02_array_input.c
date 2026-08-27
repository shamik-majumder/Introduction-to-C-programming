#include <stdio.h>
// program to take input in an array and print it
int main()
{
    int marks[5];

    printf("enter marks of 5 students\n");

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks at index %d is %d\n", i, marks[i]);
    }
    // printf("Marks of student 1: %d\n", marks[0]);
    // printf("Marks of student 2: %d\n", marks[1]);
    // printf("Marks of student 3: %d\n", marks[2]);
    // printf("Marks of student 4: %d\n", marks[3]);
    // printf("Marks of student 5: %d\n", marks[4]);

    return 0;
}