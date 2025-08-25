/*5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors.
Write getters and setters for all the data members. Also add the display function.
Create the object of this class in main method and invoke all the methods in that class.*/

#include <iostream>
using namespace std;

class ComplexNumber{
    private:
            int real;
            string imaginary;
    public:
            ComplexNumber(){
                cout<<"\n++++++++In default constructor++++++++\n";

                real=0;
                imaginary="0i";
            }

            ComplexNumber(int real, string imaginary){
                cout<<"\n++++++++In parameterised constructor++++++++\n";
                this->real=real;
                this->imaginary=imaginary;
            }

            //setters
            void setReal(int real){
                this->real=real;
            }
            void setImaginary(string imaginary){
                this->imaginary=imaginary;
            }

            //getters
            int getReal(){
                return real;
            }
            string getImaginary(){
            return imaginary;
            }

            //display function
            void display(){
                cout<<"\nComplex Number is: "<<real<<" + "<<imaginary<<"\n";
            }
};

int main() {
    ComplexNumber N1;

    N1.setReal(2);
    N1.setImaginary("3i");

    int realVal = N1.getReal();
    string imaginaryVal = N1.getImaginary();

    N1.display();

    ComplexNumber N2(5, "6i");
    N2.display();
    return 0;
}