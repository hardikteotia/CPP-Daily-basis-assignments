#include <iostream>
// #include<math.h>
using namespace std;


int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Now enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before reverse: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int j=n-1;
    for (int i = 0; i < n; i++)
    {
        while (j>=i)
        {
            if (i>j)
            {
                j--;
                break;
            }
            else
            {
                int temp;
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j--;
                break;
            }
            
        }
        

        
    }
    
    cout<<"\narray after reverse: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}

/*if (i>j)
            {
                break;
            }
            else
            {
                int temp;
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                break;
            }*/