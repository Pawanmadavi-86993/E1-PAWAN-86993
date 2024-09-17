#include <stdio.h>

int main()
{
    
    float marks1, marks2, marks3, marks4, marks5;
    float total, average;

    
    printf("Enter the marks for five subjects:\n");
    
   
    printf("Subject 1: ");
    scanf("%f", &marks1);
    printf("Subject 2: ");
    scanf("%f", &marks2);
    printf("Subject 3: ");
    scanf("%f", &marks3);
    printf("Subject 4: ");
    scanf("%f", &marks4);
    printf("Subject 5: ");
    scanf("%f", &marks5);

    
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    average = total / 5.0;

    
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

