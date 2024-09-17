#include <stdio.h>


void input2DArray(int rows, int cols, int array[rows][cols]);
void print2DArray(int rows, int cols, int array[rows][cols]);

int main() 
{
    int rows, cols;

    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    
    int array[rows][cols];

   
    input2DArray(rows, cols, array);

    
    print2DArray(rows, cols, array);

    return 0;
}


void input2DArray(int rows, int cols, int array[rows][cols]) 
{
    printf("Enter the elements of the array:\n");
    
	for (int i = 0; i < rows; i++) 
	{
        
		for (int j = 0; j < cols; j++) 
		{
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
}


void print2DArray(int rows, int cols, int array[rows][cols])
{
    printf("The 2-D array is:\n");
    
	for (int i = 0; i < rows; i++)
	{
        
		for (int j = 0; j < cols; j++) 
		{
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

