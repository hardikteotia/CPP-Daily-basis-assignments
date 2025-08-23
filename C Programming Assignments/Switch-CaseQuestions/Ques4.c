#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    
    float radius, area, circumference, volume;
    int choice;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Select an operation:\n");
    printf("Press 1 to calculate the area of the circle\n");
    printf("Press 2 to calculate the circumference of the circle\n");
    printf("Press 3 to calculate the volume of a sphere with the same radius\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        area = PI * pow(radius, 2);
        printf("Area of the circle: %.2f\n", area);
        break;
    
    case 2:
        circumference = 2 * PI * radius;
        printf("Circumference of the circle: %.2f\n", circumference);
        break;

    case 3:
        volume = (4.0/3.0) * PI * pow(radius, 3);
        printf("Volume of the sphere: %.2f\n", volume);
        break;

    default:
        printf("Invalid choice selected.\n");
        break;
    }

    return 0;
}