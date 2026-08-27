#include <stdio.h>
#include <string.h>
// Quick quiz: Take the structure employee from the previous code and add two more members to it:
// department and salary. Then, take input for 3 employees and print their details.

struct employee
{
    int id;
    char name[10];
    char department[10];
    float salary;
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter the employee ID:\n");
    scanf("%d", &e1.id);
    printf("Enter the name of the employee:\n");
    scanf("%s", &e1.name);
    printf("Enter the name of the department:\n");
    scanf("%s", &e1.department);
    printf("Enter the salary of th employee:\n");
    scanf("%f", &e1.salary);
    printf("%d %s %s %.2f\n", e1.id, e1.name, e1.department, e1.salary);

    printf("Enter the employee ID:\n");
    scanf("%d", &e2.id);
    printf("Enter the name of the employee:\n");
    scanf("%s", &e2.name);
    printf("Enter the name of the department:\n");
    scanf("%s", &e2.department);
    printf("Enter the salary of th employee:\n");
    scanf("%f", &e2.salary);
    printf("%d %s %s %.2f\n", e2.id, e2.name, e2.department, e2.salary);

    printf("Enter the employee ID:\n");
    scanf("%d", &e3.id);
    printf("Enter the name of the employee:\n");
    scanf("%s", &e3.name);
    printf("Enter the name of the department:\n");
    scanf("%s", &e3.department);
    printf("Enter the salary of th employee:\n");
    scanf("%f", &e3.salary);
    printf("%d %s %s %.2f\n", e3.id, e3.name, e3.department, e3.salary);

    return 0;
}