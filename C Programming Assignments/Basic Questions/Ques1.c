#include <stdio.h>
#include <math.h>
#define PI 3.14156

float areaOfCircle(int radius) {
    return (PI * pow(radius,2));
}

float circumferenceOfCircle(int radius){
    return (2 * PI * radius);
}
int main(){
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    if(radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }
    printf("Area of circle is : %0.3f", areaOfCircle(radius));
    printf("\nCircumference of circle is : %0.3f", circumferenceOfCircle(radius));

    return 0;
}