/*2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.*/

#include <iostream>
using namespace std;

class Date{
    private:
            int dd,mm,yy;
    public:
            //constructors
            Date(){
                cout<<"\n------In default constructor-----\n";
                dd=0;
                mm=0;
                yy=0;
            }

            Date(int dd, int mm, int yy){
                cout<<"\n------In parameterised constructor-----\n";
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


int main() {
    
    Date D1;
    D1.setDay(10);
    D1.setMonth(4);
    D1.setYear(2003);

    int day1 = D1.getDay();
    int month1 = D1.getMonth();
    int Year1 = D1.getYear();

    D1.display();

    Date D2(4,10,2003);
    D2.display();

    return 0;
}