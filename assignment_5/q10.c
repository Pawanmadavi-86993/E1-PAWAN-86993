#include <stdio.h>
#include <stdlib.h>


int* linearSearch(int array[], int size, int target)
{
    
    for (int i = 0; i < size; i++) 
	{
        
		if (array[i] == target) 
		{
            return &array[i]; 
        }
    }
    return NULL; 
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
    int target;
    int* address;

   
    acceptArrayElements(array, size);

 
    printArrayElements(array, size);

   
    printf("Enter the number to search: ");
    scanf("%d", &target);

    
    address = linearSearch(array, size, target);

    
    if (address != NULL)
	{
        printf("Element %d found at address %p.\n", target, (void*)address);
    } 
	else
	{
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

