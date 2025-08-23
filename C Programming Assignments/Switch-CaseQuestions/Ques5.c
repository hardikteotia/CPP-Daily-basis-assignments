#include <stdio.h>

int main() {
    int result;
    char choice;
    int numerator1, denominator1, numerator2, denominator2;
    printf("Enter first fraction (numerator/denominator): ");
    scanf("%d/%d", &numerator1, &denominator1);
    printf("Enter second fraction (numerator/denominator): ");
    scanf("%d/%d", &numerator2, &denominator2);

    printf("Select an operation:\n");
    printf("Press 1 to add two fractions\n");
    printf("Press 2 to subtract two fractions\n");
    printf("Press 3 to multiply two fractions\n");
    scanf(" %c", &choice);

    if (denominator1 <= 0 || denominator2 <= 0) {
        printf("Error: Denominator cannot be zero or negative.\n");
        return 1;
    }
    else
    {
        switch (choice) {
    case '1': {
        result = (numerator1 * denominator2 + numerator2 * denominator1) / (denominator1 * denominator2);
        printf("Result of addition: %d/%d\n", result, denominator1 * denominator2);
        break;
    }
    case '2': {
        result = (numerator1 * denominator2 - numerator2 * denominator1) / (denominator1 * denominator2);
        printf("Result of subtraction: %d/%d\n", result, denominator1 * denominator2);
        break;
    }
    case '3': {
        result = (numerator1 * numerator2) / (denominator1 * denominator2);
        printf("Result of multiplication: %d/%d\n", result, denominator1 * denominator2);
        break;
    }
    default:
        printf("Invalid choice selected.\n");
        break;

    }

    }
    
    return 0;
}