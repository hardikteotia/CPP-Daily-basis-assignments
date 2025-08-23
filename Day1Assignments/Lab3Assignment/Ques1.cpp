#include <iostream>
using namespace std;
int main() {
    int n1;
    cout<<"Enter the size of array: ";
    cin>>n1;
    int arr[n1];
    int sum=0,min,max;
    char choice;
    
    cout<<"Enter your choice from given below"<<endl;
    cout<<" a. Sum of numbers in an array.\n b. Average of numbers in an array.\n c. Find maximum and minimum number in the array.\n d. Enter the values in an array.\n e.Print the values in array.\n";
    do
    {
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch (choice)
        {
        case 'a':
        for (int i = 0; i < n1; i++)
        {
            sum += arr[i];
        }
        cout << "\nSum of elements: " << sum << endl;
        
        break;
        case 'b':
            for (int i = 0; i < n1; i++)
            {
                sum += arr[i];
            }
            cout << "\nAverage of elements: " << (sum / n1) << endl;
            break;
        case 'c':
            min=arr[1], max=arr[1];
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
            
            
            break;
        case 'd':
        
            for (int i = 0; i < n1; i++)
            {
            
                
                cin>>arr[i];
            }

            cout<<"\nElement entry has been completed";

            break;
        case 'e':
                for (int i = 0; i < n1; i++)
                {
                    cout<<arr[i]<<" ";
                }
                
                
            break;
        
        default:
        cout<<"\nInvalid Input";
            break;
        }
    } while (choice!='o');
    
    return 0;

    
}