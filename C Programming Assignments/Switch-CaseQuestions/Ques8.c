#include <stdio.h>

int main() {
    char name[50];
    int emp_id;
    float salary;
    int choice;
    int dataEntered = 0; // flag to check if data is entered

    do {
        printf("\n--- Menu ---\n");
        printf("1. Accept Employee Details\n");
        printf("2. Display Employee Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee Name: ");
                scanf(" %[^\n]s", name);  // read full name with spaces
                printf("Enter Employee ID: ");
                scanf("%d", &emp_id);
                printf("Enter Employee Salary: ");
                scanf("%f", &salary);
                dataEntered = 1;
                break;

            case 2:
                if (dataEntered) {
                    printf("\n--- Employee Details ---\n");
                    printf("Name   : %s\n", name);
                    printf("ID     : %d\n", emp_id);
                    printf("Salary : %.2f\n", salary);
                } else {
                    printf("Please enter employee details first.\n");
                }
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }

    } while(choice != 3);

    return 0;
}
