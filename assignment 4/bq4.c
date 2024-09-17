#include <stdio.h>


int fibonacci(int n) 
{
    
    if (n == 0) 
	{
        return 0;
    }
    if (n == 1) 
	{
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void printFibonacciSeries(int count) 
{
    for (int i = 0; i < count; i++) 
	{
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() 
{
    int numberOfTerms;

    
    printf("Enter the number of terms to print in the Fibonacci series: ");
    scanf("%d", &numberOfTerms);

    
    if (numberOfTerms < 0) 
	{
        printf("Number of terms cannot be negative.\n");
    } 
	else 
	{
        
        printFibonacciSeries(numberOfTerms);
    }

    return 0;
}

