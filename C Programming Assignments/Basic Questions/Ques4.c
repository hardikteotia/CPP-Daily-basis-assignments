#include <stdio.h>

int main() {

    int basicSalary;
    float grossSalary, deduction;
    const float pf_percent = 0.02, tax_percent = 0.03, hra_percent = 0.05, da_percent = 0.08;

    printf("Enter basic salary: ");
    scanf("%d", &basicSalary);

    if (basicSalary < 0) {
        printf("Basic salary cannot be negative.\n");
        return 1;
    }
    float PF = basicSalary * pf_percent;
    float HRA = basicSalary * hra_percent;
    float DA = basicSalary * da_percent;
    float tax = basicSalary * tax_percent;

    grossSalary = basicSalary + HRA + DA;
    deduction = PF + tax;

    printf("Net Salary: %.2f\n", (grossSalary-deduction));
    return 0;
}