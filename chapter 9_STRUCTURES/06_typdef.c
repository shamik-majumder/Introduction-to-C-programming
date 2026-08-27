#include <stdio.h>
#include <string.h>

typedef struct employee // The typedef keyword simplifies structure usage
{
    int code;
    char name[10];
    float salary;
} Emp; // we can use 'Emp' instead of 'employee'

int main()
{
    // typedef int shamik;
    // shamik a = 100;
    // printf("The value of a is %d\n", a);
    Emp e1;
    Emp *ptr1 = &e1; //pointer to structure
    // e1.code = 592569;
    ptr1->code = 611234;
    strcpy(e1.name, "Shamik");
    e1.salary = 54.50;

    printf("%d %s %.2f\n", e1.code, e1.name, e1.salary);

    return 0;
}