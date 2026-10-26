// system to manage the structure of a software company
#include <stdio.h>
// Structure definition for employee
struct employee {
    // structure members
        int id;
        char name[50];      //name
        char contact[10];   //contact
        int salary;         //salary
    };
    int main() {
    int count;
    printf("Enter the number of employees: ");
    scanf("%d", &count);
    struct employee employees[count];
    for (int i = 0; i < count; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Employee Contact: ");
        scanf("%s", employees[i].contact);
        printf("Employee Salary: ");
        scanf("%d", &employees[i].salary);
    }
    for (int i = 0; i < count; i++)
    {
        printf("------------------------------\n");
        printf("Employee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].id);
        printf("Employee Name: %s\n", employees[i].name);
        printf("Employee Contact: %s\n", employees[i].contact);
        printf("Employee Salary: %d\n", employees[i].salary);
    }
    return 0;
}