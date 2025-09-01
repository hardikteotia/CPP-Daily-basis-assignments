/*3: Class Template – Box
 Implement a class template Box<T> that stores one value of any type and provides 
 getValue() and setValue() methods.*/

 #include <iostream>
 using namespace std;

template <class T>
class Box{
private: T val1;
public:
Box(T val1){
    this->val1=val1;
    cout<<"\nparameterized\n";
}
auto getvalue(){
    return val1;
}
void setValue(T val1){
    this->val1=val1;
}
void Display(){
    cout<<"\nValue is "<<val1;
}
};
 int main() {
    Box obj(5);
    obj.Display();
   
    Box obj2(4.2);
    obj2.Display();
    Box obj3(6.4433);
    obj3.Display();
    Box obj4('A');
    obj4.Display();
     obj.setValue(8);
       cout<<obj.getvalue();

     
     return 0;
 }