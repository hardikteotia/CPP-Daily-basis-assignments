/*3:Consider that payroll software needs to be developed for computerization of
operations of an ABC organization. The organization has employees.
3.1. Construct a class Employee with following members using private access
specifies:
 Employee Id integer
 Employee Name string
 Basic Salary double
 HRA double
 Medical double=1000
 PF double
PT double
 Net Salary double
 Gross Salary double
Please use following expressions for calculations://Note:Don't accept HRA,PF PT from user
 * HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200

3.2. Write methods to display the details of an employee and calculate the gross
and net salary.
* Goss Salary = Basic Salary + HRA + Medical
* Net Salary = Gross Salary – (PT + PF)

Create Object of employee class and assign values and display Details.*/

class Employee{
    private:
            int emp_Id;
            string emp_Name;
            double emp_Salary;
            double emp_HRA;
            double emp_Medical = 1000;
            double emp_PF;
            double emp_PT = 200;

            double emp_NetSalary;
            double emp_GrossSalary;

    public: 
            void Calc_HRA(){
                emp_HRA=emp_Salary*0.5;
            }
            void Calc_PF(){
                emp_PF=emp_Salary*0.12;
            }

            //* Goss Salary = Basic Salary + HRA + Medical
            void Calc_GrossSal(){
                emp_GrossSalary=
            }
};


#include <iostream>
using namespace std;
int main() {
    
    return 0;
}