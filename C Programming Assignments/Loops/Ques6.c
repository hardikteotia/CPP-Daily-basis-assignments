#include <stdio.h>

int main() {
    /*Input two numbers: a, b.

    Start from 1 and check all numbers up to min(a, b).

    If a number divides both a and b, update GCD.

    At the end, you’ll have the largest common divisor.*/
    int num1, num2 ;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int min = 0;
    if (num1<num2)
    {
        min = num1;
    }
    else{
        min = num2;
    }

    for (int i = 1; i < min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            printf("%d ", i);           
        }
        
    }
   
    return 0;
}