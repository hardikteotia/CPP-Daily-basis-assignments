#include <stdio.h>

int main() {
    int num_1, num_2;

    int temp;
    printf("Enter two integers: ");
    scanf("%d %d", &num_1, &num_2);

    printf("Before swapping: num_1 = %d, num_2 = %d\n", num_1, num_2);
    temp = num_1;
    num_1 = num_2;
    num_2 = temp;
    printf("After swapping using third variable: num_1 = %d, num_2 = %d\n", num_1, num_2);

    printf("------------------------------------------------------------------");
    printf("\nSwapping without using third variable:\n");
    printf("Before swapping: num_1 = %d, num_2 = %d\n", num_1, num_2);

    num_1 = num_1 + num_2;
    num_2 = num_1 - num_2;
    num_1 = num_1 - num_2;
    printf("After swapping without using third variable: num_1 = %d, num_2 = %d\n", num_1, num_2);
    return 0;
}