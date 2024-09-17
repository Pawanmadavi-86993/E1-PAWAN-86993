#include <stdio.h>


int main() 
{
    int rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printPascalsTriangle(rows);

    return 0;
}
void printPascalsTriangle(int rows) 
{
    if (rows <= 0) 
	{
        printf("Number of rows must be positive.\n");
        return;
    }
    
   
    int triangle[rows][rows];
    
   
    for (int i = 0; i < rows; i++) 
	{
        
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        
        for (int j = 1; j < i; j++) 
		{
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }

    
    for (int i = 0; i < rows; i++) 
	{
        
        for (int j = 0; j < rows-i-1; j++) 
		{
            printf(" ");
        }

       
        for (int j = 0; j <= i; j++)
		{
            printf("%4d", triangle[i][j]); 
        }
        printf("\n");
    }
}


