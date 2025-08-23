#include <iostream>
using namespace std;
int main() {
    int n;
    int num, found=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter num to find: ";
    cin>>num;
    for (int i = 0; i < n; i++)
    {
        if (num==arr[i])
        {
            found=1;
            break;
        }
    }
    if (found==1)
    {
        cout<<"number is found";
    }
    else{
        cout<<"number is not found";
    }
    
    
    return 0;
}