/*Class Template – Calculator
 Create a class template Calculator<T> with functions:


add(), subtract(), multiply(), divide().
 Test with int and double.*/

#include <iostream>
using namespace std;
template <class C>//class or template ka naam same rahega to avoid declaration error
class Calculator{
    private:
            C val1, val2;//datatype template wala use hoga
    public:
    //C upar jo define hua hai usko jab pass kr rhe hai constructor me to C datatype ka hi pass karenge
            Calculator(C val1, C val2){
                this->val1=val1;
                this->val2=val2;
            }
            //when we create any function we'll give return auto for datatype
            auto add(){
                cout<<"\nAdditon is: "<<val1+val2;
            }
            auto subtract(){
                cout<<"\nsubtract is: "<<val1-val2;
            }
            auto multiply(){
                cout<<"\nmultiply is: "<<val1*val2;
            }
            auto divide(){
                cout<<"\ndivide is: "<<val1/val2;
            }

};

int main() {
    Calculator c1(2,3);
    c1.add();
    c1.multiply();
    c1.subtract();
    c1.divide();
    Calculator c2(2.2222,4.4444);
    c2.add();
    c2.multiply();
    c2.subtract();
    c2.divide();

    return 0;
}