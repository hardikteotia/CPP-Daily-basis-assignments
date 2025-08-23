#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //if number is negative or not
    if (num < 0) {
        printf("%d is negative.\n", num);
    }
    else {
        printf("%d is positive.\n", num);
    }
    
    return 0;
}