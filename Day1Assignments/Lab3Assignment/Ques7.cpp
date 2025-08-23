#include <iostream>
using namespace std;

class Students
{
private:
    int roll_no, marks1,marks2,marks3;
public:
    void getInfo();
    void display();
    void totalPercentage();
    void grade();
};

void Students::getInfo()
{
    cout<<"Enter details: Rno., marks1, marks2, marks3";
    cin>>roll_no>>marks1>>marks2>>marks3;
}
void Students::display(){
    cout<<"Rollno: "<<roll_no<<"\nmarks1: "<<marks1<<"\nmarks2: "<<marks2<<"\nmarks3: "<<marks3;
}

void Students::totalPercentage(){
    int total=marks1+marks2+marks3;
    float percentage=(total/300.0)*100;
    cout<<"\nTotal marks: "<<total<<"\nPercentage: "<<percentage;
}

void Students::grade(){
    float percentage=(marks1+marks2+marks3)/3.0;
    if(percentage>=60)
        cout<<"\nGrade: A";
    else if(percentage>=50)
        cout<<"\nGrade: B";
    else if(percentage>=40)
        cout<<"\nGrade: C";
    else
        cout<<"\nGrade: D";
}

int main() {
    Students s1;
    s1.getInfo();
    s1.display();
    s1.totalPercentage();
    s1.grade();
    return 0;
}