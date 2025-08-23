#include <stdio.h>
int main(){
    int principal, rate, time;
    float simpleInterest;
    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter rate of interest: ");
    scanf("%d", &rate);
    printf("Enter time in years: ");
    scanf("%d", &time);
    if (principal < 0 || rate < 0 || time < 0) {
        printf("Principal, rate, and time cannot be negative.\n");
        return 1;
    }
    simpleInterest = (principal * rate * time) / 100.0;
    printf("Simple Interest: %.2f\n", simpleInterest);
    
    return 0;
}