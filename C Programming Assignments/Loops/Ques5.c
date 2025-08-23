#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }
    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}