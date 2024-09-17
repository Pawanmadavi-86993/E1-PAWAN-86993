#include <stdio.h>


void findMaxMin(int array[], int size, int *max, int *min) 
{
    if (size <= 0) 
	{
        
        *max = *min = 0;  
        return;
    }

    
    *max = *min = array[0];

    
    for (int i = 1; i < size; i++)
	{
        
		if (array[i] > *max) 
		{
            *max = array[i];
        }
        if (array[i] < *min) 
		{
            *min = array[i];
        }
    }
}


void acceptArrayElements(int array[], int size) 
{
    printf("Enter %d array elements:\n", size);
 
 for (int i = 0; i < size; i++) 
 {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
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

  
    acceptArrayElements(array, size);

  
    printArrayElements(array, size);

  
    int max, min;

  
    findMaxMin(array, size, &max, &min);

    
    printf("The maiximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", min);

    return 0;
}

