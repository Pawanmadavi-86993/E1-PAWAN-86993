#include <stdio.h>


void printHexadecimal(unsigned int number) 
{
    
    char hexDigits[] = "0123456789ABCDEF";
    char hex[8 * sizeof(number) + 1]; 
    int index = 0;

    
    if (number == 0) 
	{
        printf("0\n");
        return;
    }

    
    while (number > 0) 
	{
        hex[index++] = hexDigits[number % 16];
        number /= 16;
    }

    
    for (int i = index - 1; i >= 0; i--) 
	{
        putchar(hex[i]);
    }
    printf("\n");
}

int main() 
{
    unsigned int number;

   
    printf("Enter a number to print in hexadecimal format: ");
    scanf("%u", &number);

    
    printHexadecimal(number);

    return 0;
}

