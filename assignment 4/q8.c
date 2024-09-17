#include <stdio.h>


unsigned long long nextFibonacciTerm() 
{
    
    static unsigned long long a = 0; 
    static unsigned long long b = 1; 
    
    unsigned long long next = a;     
    
 
    unsigned long long temp = a;
    a = b;
    b = temp + b;
    
    return next;
}

int main() 
{
    int terms;

    printf("Enter the number of terms to generate: ");
    scanf("%d", &terms);

    printf("Fibonacci series:\n");

    for (int i = 0; i < terms; i++) 
	{
        printf("%llu ", nextFibonacciTerm());
    }

    printf("\n");

    return 0;
}

