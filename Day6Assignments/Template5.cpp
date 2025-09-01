/*Function Template – Array Sum
 Write a function template sumArray() that accepts an array of any type and returns the sum of its elements.
*/

#include <iostream>
using namespace std;
template<class T>
T sumArray(T size){
    T arr[size];
    T sum =0;
    cout<<"Enter array of elements";
    for(int i =0;i<size;i++){
       cin>>arr[i];
       sum=sum+arr[i];
    }
return sum;
}

int main() {
    // auto res=sumArray();
    int size;
    cout<<"Enter size of array";
    cin>>size;
    auto res = sumArray<int>(size);
    cout<<"sum is: "<<res;
    return 0;
}