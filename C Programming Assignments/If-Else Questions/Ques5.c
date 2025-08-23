#include<stdio.h>
int main(){
    int angle1, angle2, angle3;
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("A valid triangle.\n");
    } else {
        printf("An invalid triangle.\n");
    }
    return 0;
}