#include <stdio.h>

struct Employees
{
    int Employee_id;
    char Employee_name[50];
    char Employee_department[50];
};


int main() {

    struct Employees emp[5];

    for (int i = 0; i < 5; i++)
    {
        printf("---Enter details for Employee %d---\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].Employee_id);
        printf("Enter Employee Name: ");
        scanf("%s", &emp[i].Employee_name);
        printf("Enter Employee Department: ");
        scanf("%s", &emp[i].Employee_department);
        printf("\n");
    }

    printf("\n-----Employee Details-----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].Employee_id);
        printf("Name: %s\n", emp[i].Employee_name);
        printf("Department: %s\n", emp[i].Employee_department);
        printf("-------------------------\n");
    }

    return 0;
}