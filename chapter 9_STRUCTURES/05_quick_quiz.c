#include <stdio.h>
#include <string.h>
// Quick quiz: Take the structure student from the previous code
// and write a function to display the details of the student.
// Pass the structure to the function using both call by value and call by reference.

struct student
{
    int roll;
    char name[20];
    float marks;
};

void display(struct student s) // Passing Structure to Function (Call by Value)
{
    printf("%d %s %.2f", s.roll, s.name, s.marks);
}

void display(struct student *s) // Passing Structure by Reference
{
    // printf("%d %s %.2f", (*s).roll, (*s).name, (*s).marks);
    printf("%d %s %.2f", s->roll, s->name, s->marks);
}

int main()
{
    struct student s1;
    struct student *ptr = &s1;
    s1.roll = 21;
    strcpy(s1.name, "Shamik");
    s1.marks = 62.29;
    // display(s1);
    display(s1);

    return 0;
}