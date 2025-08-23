#include <iostream>
using namespace std;
int main() {
    int limit, even_sum=0, odd_sum=0;
    cout<<"Enter the limit: ";
    cin>>limit;
    for (int i = 1; i <= limit; i++)
    {
        if (i%2==0)
        {
            even_sum=even_sum+i;
        }
        else{
            odd_sum+=i;
        }
        
    }
    cout<<"Even sum is: "<<even_sum<<" "<<"Odd sum is: "<<odd_sum;
        
    return 0;
}