#include<stdio.h>
int main() {

    int num1, num2, num3;
    int max = 0, min = 0;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3) {
        max = num1;
    }
    else if(num2 > num1 && num2 > num3) {
        max = num2;
    }
    else {
        max = num3;
    }

    if(num1 < num2 && num1 < num3) {
        min = num1;
    }
    else if(num2 < num1 && num2 < num3) {
        min = num2;
    }
    else {
        min = num3;
    }

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);

    return 0;
}