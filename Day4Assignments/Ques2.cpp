/*2:Create Employee class with members id(int),name(string),dob(Date).Use above created Date class.
Write default and parameterised constructor in Employee Class.Write accept()
function to accept information and display() to display emp information*/

#include <iostream>
using namespace std;

class Date{
    protected:
            int dd,mm,yy;
    public:
            //constructors
            Date(){
                cout<<"\n------In default constructor of Date Class-----\n";
                dd=0;
                mm=0;
                yy=0;
            }

            Date(int dd, int mm, int yy){
                cout<<"\n------In parameterised constructor of Date-----\n";
                this->dd=dd;
                this->mm=mm;
                this->yy=yy;
            }

            //getters
            int getDay();
            int getMonth();
            int getYear();

            //setters
            void setDay(int dd);
            void setMonth(int mm);
            void setYear(int yy);

            //display function
            void display(){
                cout<<"\nDay: "<<dd<<" Month: "<<mm<<" Year: "<<yy<<"\n";
            }

};


int Date:: getDay(){
    return dd;
}
int Date:: getMonth(){
    return mm;
}
int Date:: getYear(){
    return yy;
}

void Date:: setDay(int dd){
    this->dd=dd;
}
void Date:: setMonth(int mm){
    this->mm=mm;
}
void Date:: setYear(int yy){
    this->yy=yy;
}


class Employee : public Date{
    private:
            int id;
            string name;

    public:
            Employee(){
                cout<<"\n---------In default constructor of Employee Class---------\n";
                id=0;
                name="no_name";
            }
            
            Employee(int dd, int mm, int yy, int id, string name):Date(dd,mm,yy){
                cout<<"\n---------In parameterised constructor of Employee---------\n";
                this->id=id;
                this->name=name;
            }


            //setter as accept function()
            void accept_id(int id){
                this->id=id;
            }
            void accept_name(string name){
                this->name=name;
            }

            //getter as display function
            int get_id(){
                return id;
            }
            string get_name(){
                return name;
            }

            void display(){
                cout<<"EmpId: "<<id<<"\nEmpName: "<<name<<endl;
                cout<<"Emp Dob: "<<dd<<"/"<<mm<<"/"<<yy<<"\n";
            }
};

int main() {

    Employee E1;
    cout<<"Before setting the values\n\n";
    E1.display();

    E1.accept_id(10);
    E1.accept_name("Jhon");
    E1.setDay(20);
    E1.setMonth(2);
    E1.setYear(2004);
    
    cout<<"\nAfter setting the values\n\n";
    cout<<"\nDisplaying the data of E1 object\n\n";
    E1.display();
    

    Employee E2(10,4,2000, 101, "Smith");
    cout<<"\nDisplaying the data of E2 object\n\n";
    E2.display();

    return 0;
}