/*1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.*/ 

#include <iostream>
using namespace std;

class Person{
    private: 
            string name,city;
            int age;
    public:
    //constructors
            Person(){
                cout<<"----In default constructor----\n";
                name="no_name";
                city="no_city";
                age=0;
            }
            Person(string name, string city, int age){
                cout<<"\n----In parameterised constructor----\n";
                this->name=name;
                this->city=city;
                this->age=age;
            }

    //get will return something so we're taking datatypes
            string getName();
            string getCity();
            int getAge();
            void setName(string name);
            void setCity(string city);
            void setAge(int age);
            void display();

};
//getters definition
string Person:: getName(){
    return name;
}
string Person:: getCity(){
    return city;
}
int Person:: getAge(){
    return age;
}

//setters definition
void Person::setName(string name){
    this->name=name;
}
void Person::setCity(string city){
    this->city=city;
}
void Person:: setAge(int age){
    this->age=age;
}



void Person:: display(){
    cout<<"Name: "<<name;
    cout<<"\nAge: "<<age;
    cout<<"\n City: "<<city<<endl;;
}

int main() {
    Person P1;
    string name1 = P1.getName();
    string city1 = P1.getCity();
    int age1 = P1.getAge();
    
    cout<<name1<<" "<<city1<<" "<<age1<<"\n\n";

    P1.setName("prime");
    P1.setCity("pune");
    P1.setAge(15);
    
    cout<<"-----------Before calling display function--------"<<endl;
    cout<<name1<<" "<<city1<<" "<<age1<<"\n\n";
    cout<<"-----------After calling dispplay funvtion--------"<<endl;
    P1.display();

    Person P2("Picaso", "Moscow", 45);
    P2.display();
    return 0;
}