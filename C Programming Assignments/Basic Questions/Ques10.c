#include<stdio.h>
int main() {
    
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    if (length < 0 || breadth < 0) {
        printf("Length and breadth cannot be negative.\n");
        return 1;
    }
    int area = length * breadth;
    printf("Area of the rectangle: %d\n", area);

    int perimeter = 2 * (length + breadth);
    printf("Perimeter of the rectangle: %d\n", perimeter);
    return 0;
}