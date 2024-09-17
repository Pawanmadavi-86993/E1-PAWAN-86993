#include <stdio.h>

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

    return 0;
}

