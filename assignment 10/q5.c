#include <stdio.h>
#include <ctype.h> 

void checkAndXor(char c) 
{
    
	if (isalpha(c)) 
	{ 
        
        char result = c ^ 32;
        
       
        printf("Original character: '%c'\n", c);
        printf("Character after XOR with 32: '%c'\n", result);
    } 
	else 
	{
        printf("The character '%c' is not an alphabet.\n", c);
    }
}

int main() 
{
    char testChar = 'A'; 
    checkAndXor(testChar);
    
   
    checkAndXor('b');
    checkAndXor('1');
    checkAndXor('@');
    
    return 0;
}

