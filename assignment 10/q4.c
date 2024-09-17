#include <stdio.h>


int countSetBits(unsigned char byte)
{
    int count = 0;
    while (byte)
	{
        count += byte & 1;
        byte >>= 1;
    }
    return count;
}


unsigned char makeEvenParity(unsigned char byte)
{
    int setBits = countSetBits(byte);

    
    if (setBits % 2 == 0) 
	{
        
        return byte;
    } 
	else 
	{
       
        return byte | 0x80;
    }
}

int main() 
{
    unsigned char byte = 0x5D; 

    printf("Original byte: 0x%02X\n", byte);
    unsigned char adjustedByte = makeEvenParity(byte);
    printf("Adjusted byte: 0x%02X\n", adjustedByte);

    return 0;
}

