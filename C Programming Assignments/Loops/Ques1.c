#include <stdio.h>

int main() {
    int sum =0;

    for (; ;)
    {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0)
        {
            sum += num;
        }
        else
        {
            break; // Exit the loop if a non-positive number is entered
        }

    }

    printf("The sum is: %d\n", sum);
    return 0;
}