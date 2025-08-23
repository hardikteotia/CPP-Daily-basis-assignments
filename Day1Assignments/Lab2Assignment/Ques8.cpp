// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 2; i <= n; i++) {
//         bool prime = true;
//         for (int j = 2; j * j <= i; j++) {
//             if (i % j == 0) {
//                 prime = false;
//                 break;
//             }
//         }
//         if (prime) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }


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