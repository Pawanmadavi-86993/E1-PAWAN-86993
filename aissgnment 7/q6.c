#include <stdio.h>
#include <stdlib.h>

int** allocateMatrix(int rows, int cols);
void freeMatrix(int** matrix, int rows);

int main() 
{
    int rows, cols;
    
   
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
   
    int** matrix = allocateMatrix(rows, cols);
    
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    printf("The matrix is:\n");
    
	for (int i = 0; i < rows; i++) 
	{
        
		for (int j = 0; j < cols; j++)
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    freeMatrix(matrix, rows);
    
    return 0;
}


int** allocateMatrix(int rows, int cols)
{
  
    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) 
	{
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    
   
    for (int i = 0; i < rows; i++)
	{
        
		matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL)
		{
            fprintf(stderr, "Memory allocation failed\n");
            
            for (int j = 0; j < i; j++) 
			{
                free(matrix[j]);
            }
            free(matrix);
            exit(1);
        }
    }
    
    return matrix;
}


void freeMatrix(int** matrix, int rows) 
{
    
    for (int i = 0; i < rows; i++) 
	{
        free(matrix[i]);
    }
    
    
    free(matrix);
}

