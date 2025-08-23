#include <stdio.h>

int main() {
    int num1, num2;
    char choice;
    printf("Enter first number: ");
    scanf("%d", &num1); 
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Select an operation:\n");
    printf("Simple Calculator:\n");
    printf("----------------------------\n");

    printf("Select an operation:\n");
    printf("Type '+' for Addition\n");
    printf("Type '-' for Subtraction\n");
    printf("Type '*' for Multiplication\n");
    printf("Type '/' for Division\n");
    printf("Enter your choice (+, -, *, /): ");
    scanf(" %c", &choice);

    switch (choice) {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    printf("Thank you for using the Calculator!\n");
    printf("----------------------------\n");
    return 0;
}