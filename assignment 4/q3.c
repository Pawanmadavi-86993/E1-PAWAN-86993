#include <stdio.h>


void printCharacter(char ch, int times) {
    
    if (times < 0) 
	{
        printf("Error: Number of times must be non-negative.\n");
        return;
    }
    
    for (int i = 0; i < times; i++) 
	{
        printf(" %c ", ch);
    }
    printf("\n"); 
}

int main() 
{
    char character;
    int numberOfTimes;

    
    printf("Enter a character: ");
    scanf(" %c", &character); 

    printf("Enter the number of times to print the character: ");
    scanf("%d", &numberOfTimes);

    
    printCharacter(character, numberOfTimes);

    return 0;
}

