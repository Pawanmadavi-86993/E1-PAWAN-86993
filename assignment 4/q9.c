#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printPrimesInRange(start, end);

    return 0;
}

bool isPrime(int number) 
{
    if (number <= 1) return false; 
    if (number <= 3) return true;  
    
    
    if (number % 2 == 0 || number % 3 == 0) return false;

    
    for (int i = 5; i * i <= number; i += 6)
	{
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }

    return true;
}


void printPrimesInRange(int start, int end) 
{
    if (start > end) 
	{
        printf("Invalid range.\n");
        return;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (int num = start; num <= end; num++) 
	{
        if (isPrime(num)) 
		{
            printf("%d ", num);
        }
    }
    printf("\n");
}


