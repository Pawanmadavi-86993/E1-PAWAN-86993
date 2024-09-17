#include <stdio.h>

// Function declarations
void addMatrices(int a[3][3], int b[3][3], int result[3][3]);
void subtractMatrices(int a[3][3], int b[3][3], int result[3][3]);
void multiplyMatrices(int a[3][3], int b[3][3], int result[3][3]);
void printMatrix(int matrix[3][3]);

int main() {
    int matrix1[3][3], matrix2[3][3];
    int result[3][3];

    
    printf("Enter elements for Matrix 1:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		{
            printf("Matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for Matrix 2:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		{
            printf("Matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    addMatrices(matrix1, matrix2, result);
    printf("\nMatrix Addition Result:\n");
    printMatrix(result);

    
    subtractMatrices(matrix1, matrix2, result);
    printf("\nMatrix Subtraction Result:\n");
    printMatrix(result);

    
    multiplyMatrices(matrix1, matrix2, result);
    printf("\nMatrix Multiplication Result:\n");
    printMatrix(result);

    return 0;
}


void addMatrices(int a[3][3], int b[3][3], int result[3][3]) 
{
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++)
		{
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(int a[3][3], int b[3][3], int result[3][3]) 
{
    
	for (int i = 0; i < 3; i++)
	{
        
		for (int j = 0; j < 3; j++)
		{
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}


void multiplyMatrices(int a[3][3], int b[3][3], int result[3][3]) 
{
    
	for (int i = 0; i < 3; i++)
	{
        for (int j = 0; j < 3; j++)
		{
            result[i][j] = 0;
           
		   for (int k = 0; k < 3; k++) 
		   {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


void printMatrix(int matrix[3][3])
{
    printf("Matrix:\n");
    
	for (int i = 0; i < 3; i++) 
	{
        
		for (int j = 0; j < 3; j++)
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

