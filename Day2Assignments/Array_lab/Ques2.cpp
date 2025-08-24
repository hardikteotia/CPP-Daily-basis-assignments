#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0, average;
    cout<<"Enter the number of students: ";
    cin>>n;
    cout<<"Now enter marks of "<<n<<" students: ";
    int marks[n];
    for(int i=0; i<n; i++) {
        cin>>marks[i];
    }
    cout<<"You entered: ";
    for(int i=0; i<n; i++) {
        cout<<marks[i]<<" ";
    }


    for(int i=0; i<n; i++) {
        sum += marks[i];
    }
    average = sum / n;
    cout<<"\nSum of marks: "<<sum<<endl;
    cout<<"Average marks: "<<average;

    return 0;
}