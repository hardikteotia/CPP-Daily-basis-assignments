#include <stdio.h>

int main() {
    int var1, var2;
    int choice;
    printf("Enter first number: ");
    scanf("%d", &var1);
    printf("Enter second number: ");
    scanf("%d", &var2);

    printf("Select an operation:\n");
    printf("Press 1 to check equality of both numbers\n");
    printf("Press 2 to check if first number is less than second number\n");
    printf("Press 3 to get Quotient and Remainder of first number divided by second number\n");
    printf("Press 4 to input a number and check if it comes in the range of both numbers [%d, %d]\n", var1, var2);
    printf("Press 5 to swap the two numbers\n\n\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("----------------------------");
    printf("\n\n");
    switch (choice)
    {
    case 1:
        if (var1 == var2) {
            printf("Both numbers are equal.\n");
        } else {
            printf("Both numbers are not equal.\n");
        }
        break;
    
        case 2:
        if (var1 < var2) {
            printf("First number is less than second number.\n");
        } else {
            printf("First number is not less than second number.\n");
        }

        case 3:
        if (var2 != 0) {
            printf("Quotient: %d, Remainder: %d\n", var1 / var2, var1 % var2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

        case 4:
        {
            int num;
            printf("Enter a number to check its range: ");
            scanf("%d", &num);
            if (num >= var1 && num <= var2) {
                printf("Number %d is in the range [%d, %d].\n", num, var1, var2);
            } else {
                printf("Number %d is not in the range [%d, %d].\n", num, var1, var2);
            }
        }
        break;

        case 5:
        {
            var1 = var1 + var2;
            var2 = var1 - var2;
            var1 = var1 - var2;
            printf("After swapping: First number = %d, Second number = %d\n", var1, var2);
        }
        break;

    default:
        printf("Invalid choice selected.\n");
        break;
    }
    return 0;
}