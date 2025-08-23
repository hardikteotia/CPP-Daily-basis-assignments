#include <stdio.h>
#include <math.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    float percentage;

    printf("Enter marks for 5 subjects (out of 100 each): ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
    if (marks1 < 0 || marks2 < 0 || marks3 < 0 || marks4 < 0 || marks5 < 0) {
        printf("Marks cannot be negative.\n");
    }
    if (marks1 > 100 || marks2 > 100 || marks3 > 100 || marks4 > 100 || marks5 > 100) {
        printf("Marks cannot exceed 100.\n");
    }
    else {
        percentage = ((marks1 + marks2 + marks3 + marks4 + marks5) / 500.0) * 100;
        printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}