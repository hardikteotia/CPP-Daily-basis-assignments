#include <stdio.h>

int main() {
    int x,y;
    int product = 1;
    printf("Enter the base value: ");
    scanf("%d", &x);
    printf("Enter the exponent value: ");
    scanf("%d", &y);
    
    for (int i = 0; i < y; i++)
    {
        product *= x;
    }

    printf("The product is: %d\n", product);
    return 0;
}