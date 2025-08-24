#include <iostream>
using namespace std;
int main() {

    int n1;
    cout<<"Enter the size of the array: ";
    cin>>n1;
    int arr[n1];
    cout<<"Now enter "<<n1<<" elements: ";
    for (int i = 0; i < n1; i++)
    {
        cin>>arr[i];
    }
    int min=arr[1], max=arr[1];
            for (int i = 0; i < n1; i++)
            {
                if (arr[i]<min)
                {
                    min=arr[i];
                }
                else if (arr[i]>max)
                {
                    max=arr[i];
                }
                else if (arr[i]==min || arr[i]==max)
                {
                    continue;
                }
                
                
            }
            cout<<"Max ="<<max<<" "<<"Min ="<<min;
    return 0;
}