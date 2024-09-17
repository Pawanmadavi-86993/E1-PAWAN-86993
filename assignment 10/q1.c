#include <stdio.h>

int countSetBits(unsigned int num) 
{
    int count = 0;
    while (num) 
	{
        count += num & 1; 
        num >>= 1;        
    }
    return count;
}

int main()
{
    unsigned int number = 29; 
    printf("Number of '1' bits in %u is %d\n", number, countSetBits(number));
    return 0;
}

