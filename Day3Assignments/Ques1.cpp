#include <iostream>
using namespace std;
class Students
{
private:
    int rollNo;
    int marks1,marks2,marks3;
public:
void acceptData();
void displayData();
};

void Students::acceptData(){
    cout<<"Enter roll number: ";
    cin>>rollNo;
    cout<<"Enter marks of 3 subjects: ";
    cin>>marks1>>marks2>>marks3;
}

void Students::displayData(){
    cout<<"Roll number: "<<rollNo<<endl;
    cout<<"Marks1: "<<marks1<<endl;
    cout<<"Marks2: "<<marks2<<endl;
    cout<<"Marks3: "<<marks3<<endl;
    cout<<"Total Percentage: "<<(marks1+marks2+marks3)/3.0<<endl;
    cout<<"Total Grade: ";
    if((marks1+marks2+marks3)/3.0 >= 60)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
}

int main() {
    Students s;
    s.acceptData();
    s.displayData();
    return 0;
}