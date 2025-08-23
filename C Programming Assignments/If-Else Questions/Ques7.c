#include<stdio.h>
int main() {

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A'; // Convert to uppercase
        printf("Converted character: %c\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a'; // Convert to lowercase
        printf("Converted character: %c\n", ch);
    }
    else {
        printf("The character is not an alphabet.\n");
    }
    return 0;
}