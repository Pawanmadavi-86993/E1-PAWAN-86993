#include <stdio.h>


void printFibonacci(int n) 
{
    if (n <= 0) 
	{
        printf("Number of terms must be positive.\n");
        return;
    }
    
    long long a = 0, b = 1; 
    
    printf("Fibonacci series:\n");
    
    for (int i = 0; i < n; i++) 
	{
        if (i == 0) 
		{
            printf("%lld", a);
        } 
		else if (i == 1) 
		{
            printf(" %lld", b);
        }
		else
		{
            long long next = a + b;
            printf(" %lld", next);
            a = b;
            b = next;
        }
    }
    
    printf("\n");
}

int main() 
{
    int terms;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    printFibonacci(terms);

    return 0;
}

