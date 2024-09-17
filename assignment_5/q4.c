#include <stdio.h>


int findMaximum(int array[], int size) 
{
    int max = array[0]; 

   
    for (int i = 1; i < size; i++) 
	{
        if (array[i] > max) 
		{
            max = array[i];
        }
    }
    return max;
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

   
    int max = findMaximum(array, size);

    
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

