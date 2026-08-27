#include <stdio.h>

// Write a program to determine whether a student has passed or failed. To pass, a 
// student requires a total of 40% and at least 33% in each subject. Assume there 
// are three subjects and take the marks as input from the user.

int main()
{
    int marks1, marks2, marks3;
    printf(" enter marks1; \n");
    scanf("%d", &marks1);
    printf(" enter marks2;\n");
    scanf("%d", &marks2);
    printf(" enter marks3; \n");
    scanf("%d", &marks3);
    printf("the marks are %d %d and %d\n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("you have failed");
    }
    else if (((marks1 + marks2 + marks3) / 3) < 40)
    {
        printf(" you are failed due to less marks in individual subject");
    }
    else
    {
        printf("you have passed");
    }
    return 0;
}
