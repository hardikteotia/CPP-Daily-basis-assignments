#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    int i = 0, j=0;
    char ch;
    printf("This is a menu driven program for");
        printf("\na) Compute area of circle");
        printf("\nb) Compute area of rectangle");
        printf("\nc) Compute area of triangle");
        printf("\nd) Exit");
        printf("\n");
    while (1)
    {
        printf("__________________________\n");
        printf("--Enter your choice-- \n""a"",\n""b"",\n""c"",\n""d""");
        scanf(" %c", &ch);

        switch (ch)
        {
        case 'a':
            printf("\nEnter radius of circle: ");
            scanf("%d", &i);
            printf("Area of circle = %f\n", PI * i * i);
            break;
        case 'b':
            printf("\nEnter length of rectangle: ");
            scanf("%d", &i);
            printf("Enter breadth of rectangle: ");
            scanf("%d", &j);
            printf("Area of rectangle = %d\n", i * j);
            break;
        case 'c':
            printf("Enter base of triangle: ");
            scanf("%d", &i);
            printf("Enter height of triangle: ");
            scanf("%d", &j);
            printf("Area of triangle = %f\n", 0.5 * i * j);
            break;
        case 'd':
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    

    return 0;
}