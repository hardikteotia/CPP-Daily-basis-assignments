#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter the charcter: ");
    scanf(" %c", &ch);
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%c", ch+i);
    }
    
    return 0;
}