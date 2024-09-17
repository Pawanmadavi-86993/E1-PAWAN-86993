#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[50]; 
    char *token;

    
    printf("Length of 'Hello': %d\n", strlen(str1)); 

    
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    
    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3); 

  
    int compareResult = strcmp(str1, str2);
    printf("Comparison result: %d\n", compareResult); 

   
    char *charPtr = strchr(str1, 'l');
    printf("Position of 'l': %p\n", charPtr); 

   
    char *subStr = strstr(str2, "or");
    printf("Substring 'or' position: %p\n", subStr); 

    
    strncpy(str3, str1, 3);
    printf("strncpy result: %s\n", str3);

    
    strncat(str3, str2, 2);
    printf("strncat result: %s\n", str3); 

  
    int compareResult2 = strncmp(str1, str2, 3);
    printf("strncmp result: %d\n", compareResult2); 

    
    char str[] = "This is a string to tokenize";
    token = strtok(str, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
