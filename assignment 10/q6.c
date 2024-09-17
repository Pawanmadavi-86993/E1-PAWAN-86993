#include <stdio.h>

// Function to swap two numbers using XOR operation
void swapUsingXOR(int *a, int *b) 
{
    if (a == b) 
	return; 

    *a = *a ^ *b; 
    *b = *a ^ *b;
    *a = *a ^ *b; 
}

int main() 
{
    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);
    
	swapUsingXOR(&x, &y); 
    
	printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

