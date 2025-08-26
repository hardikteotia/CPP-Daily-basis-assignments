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
 #include <iostream>
 using namespace std;

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
                emp_GrossSalary= emp_Salary + emp_HRA + emp_Medical;
            }
            //* Net Salary = Gross Salary – (PT + PF)
            void Calc_NetSal(){
                emp_NetSalary= emp_GrossSalary - (emp_PT + emp_PF);
            }

            //setters
            void set_empID(int emp_Id){
                this->emp_Id= emp_Id;
            }
            void set_empName(string emp_Name){
                this->emp_Name= emp_Name;
            }
            void set_empSalary(double emp_Salary){
                this->emp_Salary= emp_Salary;
            }

            //getters
            int get_empID(){
                return emp_Id;
            }
            string get_empName(){
                return emp_Name;
            }
            double get_empSalary(){
                return emp_Salary;
            }

            //displaying the data
            void displayEmployeeDetails(){
                cout << "Employee ID: " << get_empID() << endl;
                cout << "Employee Name: " << get_empName() << endl;
                cout << "Basic Salary: " << get_empSalary() << endl;
                Calc_HRA();
                Calc_PF();
                Calc_GrossSal();
                Calc_NetSal();
                cout << "HRA: " << emp_HRA << endl;
                cout << "Medical: " << emp_Medical << endl;
                cout << "PF: " << emp_PF << endl;
                cout << "PT: " << emp_PT << endl;
                cout << "Gross Salary: " << emp_GrossSalary << endl;
                cout << "Net Salary: " << emp_NetSalary << endl;
            }
};


int main() {

    Employee emp1;
    emp1.set_empID(101);
    emp1.set_empName("John Doe");
    emp1.set_empSalary(50000);

    emp1.displayEmployeeDetails();

    return 0;
}