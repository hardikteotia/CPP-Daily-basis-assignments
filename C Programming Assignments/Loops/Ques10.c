#include <stdio.h>

int main() {
    static int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    int rev = 0;
    int digit = 0;

    while (num != 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
        digit++;
    }
    if (temp == rev)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }

    

    return 0;
}