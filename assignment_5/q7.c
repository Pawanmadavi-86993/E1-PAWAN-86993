#include <stdio.h>

void selectionSort(int array[], int size)
{
    int i, j, minIndex, temp;
    
	for (i = 0; i < size - 1; i++) 
	{
       
        minIndex = i;
        
		for (j = i + 1; j < size; j++) 
		{
            if (array[j] < array[minIndex]) 
			{
                minIndex = j;
            }
        }
        
        if (minIndex != i) 
		{
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
}


void printArrayElements(int array[], int size)
{
    
	printf("Array elements are:\n");
    
	for (int i = 0; i < size; i++)
	{
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() 
{
    int size = 5;
    int array[size];

 
    printf("Enter %d array elements:\n", size);
    
	for (int i = 0; i < size; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

   
    printArrayElements(array, size);

   
    selectionSort(array, size);

   
    printf("Sorted array using selection sort:\n");
    printArrayElements(array, size);

    return 0;
}

