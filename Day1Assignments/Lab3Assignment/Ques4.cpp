#include<iostream>
using namespace std;
int main(){
    int range;
    int isPrime = 1;
    cout<<"Enter a range to print the prime number series: ";
    cin>>range;
    for (int i = 2; i <= range-1; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                isPrime=0;
                break;
            }
            else{
                isPrime=1;
            }
            
        }
        if (isPrime==1)
        {
            /* code */
            cout<<i<<" ";        
        }
        
        
    }
    
    return 0;
}