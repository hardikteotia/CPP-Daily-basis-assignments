#include <stdio.h>

int main() {
    int n;
    printf("Enter the value for prime number series limit: ");
    scanf("%d", &n);

    
        for (int i = 2; i <= n; i++) {
        int isPrime = 1; // assume i is prime

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
        if (isPrime)
        {
           printf("%d ", i);
        }
        
            
        
    
    }
    return 0;
}