#include <stdio.h>

int sumOfRow(int matrix[3][3], int row);
int sumOfColumn(int matrix[3][3], int column);

int main() 
{
    int matrix[3][3];

   
    printf("Enter elements for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    int row, column;
    
    
    printf("Enter the row index (0-2) to calculate the sum: ");
    scanf("%d", &row);
    
	if (row >= 0 && row < 3)
	{
        int rowSum = sumOfRow(matrix, row);
        printf("Sum of elements in row %d: %d\n", row, rowSum);
    }
	else
	{
        printf("Invalid row index.\n");
    }

    
    printf("Enter the column index (0-2) to calculate the sum: ");
    scanf("%d", &column);
    
	if (column >= 0 && column < 3) 
	{
        int columnSum = sumOfColumn(matrix, column);
        printf("Sum of elements in column %d: %d\n", column, columnSum);
    } 
	else 
	{
        printf("Invalid column index.\n");
    }

    return 0;
}


int sumOfRow(int matrix[3][3], int row)
{
    int sum = 0;
    for (int j = 0; j < 3; j++)
	{
        sum += matrix[row][j];
    }
    return sum;
}

int sumOfColumn(int matrix[3][3], int column) 
{
    int sum = 0;
    for (int i = 0; i < 3; i++) 
	{
        sum += matrix[i][column];
    }
    return sum;
}

