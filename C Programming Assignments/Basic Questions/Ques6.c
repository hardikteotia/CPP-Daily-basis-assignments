#include <stdio.h>
#include <math.h>
# define PI 3.14156

int main() {
    int radius, height;
    printf("Enter the radius of cylinder: ");
    scanf("%d", &radius);
    printf("Enter the height of cylinder: ");
    scanf("%d", &height);

    if (radius < 0 || height < 0) {
        printf("Radius and height ""none of then cannot""be negative.\n");
        return 1;
    }

    float surfaceArea = 2 * PI * radius * (radius + height);
    printf("Surface area of the cylinder: %.2f\n", surfaceArea);

    float volume =  PI * pow(radius, 2) * height;
    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}   