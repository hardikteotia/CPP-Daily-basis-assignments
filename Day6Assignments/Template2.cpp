/*Function Template – Maximum
 Write a function template findMax() that returns the maximum of two values.*/

 #include <iostream>
//  #include <algorithm>
 using namespace std;

 template<class T>
auto max(T& n1, T& n2){
    // int max;
   if(n1>n2){
    return n1;
   }
   else{
    return n2;
   }
}

 int main() {
    int num1 = 20, num2 = 40;

    auto res1 = max(num1,num2);
    cout<<"maximun num is : "<<res1;
    // res = 0;
   
    double a=32.43, b= 45.567;
    auto res2 = max(a,b);
    cout<<"\nmaximun num is : "<<res2;
    
    float c=23.4235, d=23.4236;
    auto res3 = max(c,d);
    cout<<"\nmaximun num is : "<<res3;
     return 0;
 }