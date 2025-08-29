/*2:Create cpp application for bank account handling.
2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add  constr. (2 constrs : first to accept all details )

2.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)

2.3: Create object of account class and test withdraw and deposit methods.*/

#include <iostream>
using namespace std;

class BankAccount{
    private: 
            long int accNo;
            string c_Name;
            double balance;
            double withdrawl_amount;
            double deposited_amount;
    
    public:
            BankAccount(){
                accNo=0;
                c_Name="-----";
                balance=0.00;
                withdrawl_amount=0.00;
                deposited_amount=0.00;
                
            }
    
            BankAccount(long int accNo,
                        string c_Name,
                        double balance
                        /*double withdrawl_amount,
                        double deposited_amount*/ ){

                this->accNo=accNo;
                this->c_Name=c_Name;
                this->balance=balance;
                // this->withdrawl_amount=withdrawl_amount;
                // this->deposited_amount=deposited_amount;
            }

            void display_details();
            
            //getter 
            double check_Balance();
            
            //setter
            void withdraw_Balance(double withdrawl_amount);
            void deposit_Balance(double deposited_amount);
};

double BankAccount:: check_Balance(){
    return balance;
}

void BankAccount::withdraw_Balance(double withdrawl_amount){
    this->balance-=withdrawl_amount;
}

void BankAccount::deposit_Balance(double deposited_amount){
    this->balance+=deposited_amount;
}

void BankAccount::display_details(){
    cout<<"\nAccount Number: "<<accNo;
    cout<<"\nCustomer Name : "<<c_Name;
    cout<<"\nAccount Balance: "<<balance<<endl;
}




int main() {
    
    BankAccount A1;
    double bal = A1.check_Balance();
    cout<<"Your Balance is: "<<bal<<endl;

    A1.display_details();

    BankAccount A2(104353235452, "Praveen", 10000);
    A2.display_details();

    int withdraw,deposit;
    int choice;
    do{
        cout<<"Enter choice\n1. Withdraw.\n2. Deposit.\n3. Display Details.\n4. To exit the program enter ""0""\n";
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter the Amount to withdraw: ";
                    cin>>withdraw;
                    A2.withdraw_Balance(withdraw);
                    break;
            case 2:
                    cout<<"Enter the Amount to deposit: ";
                    cin>>deposit;
                    A2.deposit_Balance(deposit);
                    break;
            case 0:
                    break;
            
            default: cout<<"Invalid input\n";
        }

    }while(choice!=0);

    cout<<"\n";
    A2.display_details();
    return 0;
}