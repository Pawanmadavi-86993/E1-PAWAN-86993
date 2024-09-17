#include <stdio.h>

void printBinary(unsigned int num) 
{
    
    int numBits = sizeof(num) * 8; 

    
    int leadingZeroes = 1;
    for (int i = numBits - 1; i >= 0; i--) 
	{
        
        if (num & (1 << i)) 
		{
          
            putchar('1');
            leadingZeroes = 0; 
        } 
		else if (!leadingZeroes) 
		{
           
            putchar('0');
        }
    }

    
    putchar('\n');
}

int main() 
{
    unsigned int number = 29; 
    printf("Binary representation of %u is: ", number);
    printBinary(number);
    return 0;
}

