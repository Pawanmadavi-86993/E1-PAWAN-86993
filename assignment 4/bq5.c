#include <stdio.h>


void printBinary(unsigned int number) 
{
    
    char binary[32];
    int index = 0;

   
    if (number == 0) 
	{
        printf("0\n");
        return;
    }

    
    while (number > 0) 
	{
        binary[index++] = (number % 2) ? '1' : '0';
        number /= 2;
    }

    
    for (int i = index - 1; i >= 0; i--) 
	{
        putchar(binary[i]);
    }
    printf("\n");
}

int main()
{
    unsigned int number;

    
    printf("Enter a number to print in binary format: ");
    scanf("%u", &number);

    
    printBinary(number);

    return 0;
}

