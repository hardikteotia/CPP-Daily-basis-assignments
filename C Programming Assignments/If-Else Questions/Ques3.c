#include<stdio.h>
int main(){

    int annualBasicSalary;
    float tax = 0;
    printf("Enter the annual basic salary: ");
    scanf("%d", &annualBasicSalary);

    if (annualBasicSalary<150000) {
    
        printf("No tax is applicable.\n");
    }
    else if(annualBasicSalary >= 150000 && annualBasicSalary < 300000) {
        tax = (annualBasicSalary - 150000) * 0.2;//salary above 150000 is taxed at 20%
        printf("Tax to be paid: %.2f\n", tax);
    }
    else if (annualBasicSalary >= 300000) {
    
        tax = (annualBasicSalary - 300000) * 0.3 + 30000; // 20% on first 150000, then 30% on the rest
        printf("Tax to be paid: %.2f\n", tax);
    }
    
    
    return 0;
}