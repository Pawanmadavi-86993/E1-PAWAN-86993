#include <stdio.h>


int  power(int base, int exponent) 
{
    
    if (exponent == 0) 
	{
        return 1.0;
    }
    
    else if (exponent > 0) 
	{
        return base * power(base, exponent - 1);
    }
    
    else 
	{
        return 1 / power(base, -exponent);
    }
}

int main() 
{
    int base;
    int exponent;

   
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    
    printf("%d raised to the power of %d is %d\n", base, exponent, power(base, exponent));

    return 0;
}

