#include <stdio.h>

unsigned long long factorial(int n) 
{
    unsigned long long result = 1;
    
    for (int i = 1; i <= n; i++) 
	{
        result *= i;
    }
    
    return result;
}

int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) 
	{
        printf("Factorial of a negative number is not defined.\n");
    } else 
	{
        printf("Factorial of %d is %llu.\n", num, factorial(num));
    }
    
    return 0;
}

