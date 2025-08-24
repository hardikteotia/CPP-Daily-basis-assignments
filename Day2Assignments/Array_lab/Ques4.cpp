#include <iostream>
using namespace std;
int main() {
    //linear search
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to search for: ";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout<<"Element found at index "<<i;
            return 0;
        }
    }
    cout<<"Element not found";
    return 0;
}