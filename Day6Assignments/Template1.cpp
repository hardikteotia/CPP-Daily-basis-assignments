/*Function Template – Swap
 Write a function template swapValues() that swaps two variables of any type.


Test with int, double, and string.
*/


#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b){
    T temp=a;
    a=b;
    b=temp;
}

int main() {
    int n1,n2;
    cout<<"Enter values in integer: ";
    cin>>n1>>n2;
    swapValues<int>(n1,n2);
    cout<<"Swapped values: "<<n1<<" "<<n2<<endl;
    cout<<"Enter values in float: ";
    float f1,f2;
    cin>>f1>>f2;
    swapValues<float>(f1,f2);
    cout<<"Swapped values: "<<f1<<" "<<f2<<endl;
    double d1,d2;
    cout<<"Enter values in double: ";
    cin>>d1>>d2;
    swapValues<double>(d1,d2);
    cout<<"Swapped values: "<<d1<<" "<<d2<<endl;
    return 0;
}