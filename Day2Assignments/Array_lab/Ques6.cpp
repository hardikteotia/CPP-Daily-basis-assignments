#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //counting even and odd numbers in an array
    int even_count=0, odd_count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
        
    }

    cout<<"Even count: "<<even_count<<" Odd count: "<<odd_count; 
    

    return 0;
}