#include <stdio.h>

int main() {
    int num;
    int factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit with an error code

        if (num == 0) {
            printf("Factorial of 0 is 1\n");
            return 0; // Exit successfully
        }
        
    }


    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d is %d\n", num, factorial);
    return 0;
}