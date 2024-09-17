#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STUDENTS 5
#define MAX_NAME_LENGTH 100


void inputNames(char *names[NUM_STUDENTS]);
void printNames(char *names[NUM_STUDENTS]);
void sortNames(char *names[NUM_STUDENTS]);
void freeNames(char *names[NUM_STUDENTS]);

int main()
{
    char *names[NUM_STUDENTS];
    
   
    inputNames(names);
    
 
    printf("\nBefore sorting:\n");
    printNames(names);
    
    
    sortNames(names);
    
    
    printf("\nAfter sorting:\n");
    printNames(names);
    
    
    freeNames(names);
    
    return 0;
}

#define NUM_STUDENTS 5
#define MAX_NAME_LENGTH 100

void inputNames(char *names[NUM_STUDENTS])
{
    for (int i = 0; i < NUM_STUDENTS; i++)
	{
        names[i] = malloc(MAX_NAME_LENGTH * sizeof(char));
        if (names[i] == NULL)
		{
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
        
		printf("Enter name of student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        
        
        size_t len = strlen(names[i]);
        
		if (len > 0 && names[i][len - 1] == '\n') 
		{
            names[i][len - 1] = '\0';
        }
    }
}


void printNames(char *names[NUM_STUDENTS]) 
{
    printf("Student names are:\n");
    
	for (int i = 0; i < NUM_STUDENTS; i++)
	{
        printf("%d. %s\n", i + 1, names[i]);
    }
}

int compareNames(const void *a, const void *b) 
{
    return strcmp(*(const char **)a, *(const char **)b);
}

void sortNames(char *names[NUM_STUDENTS]) 
{
    qsort(names, NUM_STUDENTS, sizeof(char *), compareNames);
}

void freeNames(char *names[NUM_STUDENTS]) 
{
    
	for (int i = 0; i < NUM_STUDENTS; i++) 
	{
        free(names[i]);
    }
}

