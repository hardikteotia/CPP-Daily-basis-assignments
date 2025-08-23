#include <stdio.h>

int main() {
    int temperature;
    printf("Enter the temperature in Fahrenite (F): ");
    scanf("%d", &temperature);

    if (temperature < -459) {
        printf("Temperature cannot be below absolute zero.\n");
        return 1;
    }
    float celsius = (5*(temperature - 32))/9;
    printf("Temperature in Celsius (C): %.2f C\n", celsius);

    float kelvin = celsius + 273.15;
    printf("Temperature in Kelvin (K): %.2f K\n", kelvin);

    return 0;
}