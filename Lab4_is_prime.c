#include <stdio.h>


int is_prime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 not prime numbers
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Found a divisor, not a prime number
        }
    }

    return 1; // No divisors found, it's a prime number
}

int main()
{
    
    int num; 
    int runner = 1;
    scanf("%d",&num);
    
    while(runner < 11){
        
        if( is_prime(runner) ){
            printf("%d is a prime number.\n",runner);
        }
        runner = runner + 1;
    }
    
    

    return 0;
}