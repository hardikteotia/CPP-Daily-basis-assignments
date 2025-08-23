#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Select an operation:\n");
    printf("Press 1 to check if the number is even or odd\n");
    printf("Press 2 to check if the number is positive, negative, or zero\n");

    printf("Enter your choice (1-2): ");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            if (num % 2 == 0) {
                printf("The number is even.\n");
            } else {
                printf("The number is odd.\n");
            }
            break;
        case 2:
            if (num > 0) {
                printf("The number is positive.\n");
            } else if (num < 0) {
                printf("The number is negative.\n");
            } else {
                printf("The number is zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    printf("Thank you for using the program!\n");
    return 0;
}