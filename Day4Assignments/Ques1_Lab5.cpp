/*1 Solve this.
Fresh business scenario to apply inheritance , polymorphism   to emp based organization scenario.

Create Emp based organization structure --- Emp , Mgr , Worker


1.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.

Methods ---
1.2. compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})

1.2 Mgr state  ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. compute net salary (formula: basic+perfBonus) -- override computeNetSalary


1.3 Worker state  --id,name,basic,deptId,hoursWorked,hourlyRate
Methods : 
1.  compute net salary (formula:  = basic+(hoursWorked*hourlyRate) --override computeNetSalary
2. get hrlyRate of the worker  -- add a new method to return hourly rate of a worker.(getter)

Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details

2. Hire Worker  
I/P : all worker details

3. Display information of all employees net salary (by invoking computeNetSal), 

4. Exit*/

#include <iostream>
using namespace std;

class Employee {

    protected:
        int e_id;
        string e_name;
        int e_depId;
        double e_basicSalary;
    public:
        Employee(int e_id, string e_name, int e_depId, double e_basicSalary) {
            cout << "--------In parameterised constructor of Parent(Employee) Class--------\n\n";
            this->e_id = e_id;
            this->e_name = e_name;
            this->e_depId = e_depId;
            this->e_basicSalary = e_basicSalary;
        }

        virtual double computeNetSalary() {
            return e_basicSalary;
        }

        // virtual ~Employee() {}
            
};


class Manager : public Employee {

    private:
        int perfBonus;
    public:
        Manager(int e_id, string e_name, int e_depId, double e_basicSalary, int perfBonus)
            : Employee(e_id, e_name, e_depId, e_basicSalary) {
            this->perfBonus = perfBonus;
        }
        double computeNetSalary() override {
            return e_basicSalary + perfBonus;
        }
};


class Worker : public Employee {
    private:
        int hoursWorked;
        int hourlyRate;
    public:
        Worker(int e_id, string e_name, int e_depId, double e_basicSalary, int hoursWorked, int hourlyRate)
            : Employee(e_id, e_name, e_depId, e_basicSalary) {
            this->hoursWorked = hoursWorked;
            this->hourlyRate = hourlyRate;
        }
        double computeNetSalary() override {
            return e_basicSalary + (hoursWorked * hourlyRate);
        }

        int getHourlyRate() {
            return hourlyRate;
        }
};



int main() {
    
    int n,choice;
    cout<<"Enter the number of employees you wanna add: ";
    cin>>n;
    Employee* E_arr[n] = {nullptr};
    int i = 0;
    do {
        cout << "\n++++++Select your choice from the following++++++\n";
        cout << "1. Hire Employee (Manager/Worker)\n2. Display information of all employees net salary\n3. Exit\n";
        cout << "Enter the choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                if (i >= n) {
                    cout << "Cannot hire more employees. Array is full.\n";
                    break;
                }
                int choice2;
                cout << "---Enter the choice from the following---\n";
                cout << "1. Hire Manager.\n2. Hire Worker.\n";
                cout << "Enter your choice: ";
                cin >> choice2;
                if (choice2 == 1) {
                    int id, depId, perfBonus;
                    string name;
                    double basicSalary;
                    cout << "\n+++++Enter Manager Details+++++\n";
                    cout << "Manager ID: ";
                    cin >> id;
                    cout << "Manager name: ";
                    cin >> name;
                    cout << "Manager Department ID: ";
                    cin >> depId;
                    cout << "Manager Basic Salary: ";
                    cin >> basicSalary;
                    cout << "Manager PerfBonus: ";
                    cin >> perfBonus;
                    E_arr[i] = new Manager(id, name, depId, basicSalary, perfBonus);
                    i++;
                } else if (choice2 == 2) {
                    int id, depId, hoursWorked, hourlyRate;
                    string name;                                              
                    double basicSalary;
                    cout << "\n+++++Enter Worker Details+++++\n";
                    cout << "Worker ID: ";
                    cin >> id;
                    cout << "Worker name: ";
                    cin >> name;
                    cout << "Worker Department ID: ";
                    cin >> depId;
                    cout << "Worker Basic Salary: ";
                    cin >> basicSalary;
                    cout << "Worker Hours Worked: ";
                    cin >> hoursWorked;
                    cout << "Worker Hourly Rate: ";
                    cin >> hourlyRate;
                    E_arr[i] = new Worker(id, name, depId, basicSalary, hoursWorked, hourlyRate);
                    i++;
                }
                break;
            }
            case 2: {
                cout << "\n+++++Display information of all employees net salary+++++\n";
                for (int j = 0; j < i; j++) {
                    cout << "Employee " << (j + 1) << " Net Salary: " << E_arr[j]->computeNetSalary() << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 3 && i < 5);

    // Clean up dynamically allocated memory
    for (int j = 0; j < i; j++) {
        delete E_arr[j];
    }

    return 0;
}