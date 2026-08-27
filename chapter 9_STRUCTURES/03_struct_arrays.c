#include <stdio.h>

// Structures can also be used to create arrays of structures.

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s1[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %f", &s1[i].roll, &s1[i].name, &s1[i].marks);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d %s %.2f", s1[i].roll, s1[i].name, s1[i].marks);
    }

    return 0;
}