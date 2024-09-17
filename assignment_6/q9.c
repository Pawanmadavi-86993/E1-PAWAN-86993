#include <stdio.h>
#include <string.h>

void findAndReplace(char *source, const char *find, const char *replace) {
    char buffer[1024];  
    char *pos;          
    int findLen = strlen(find); 
    int replaceLen = strlen(replace); 

    buffer[0] = '\0'; 

    while ((pos = strsr(source, find)) != NULL) {  
        
        strncat(buffer, source, pos - source);  
        
        
        strcat(buffer, replace);  

        
        source = pos + findLen;
    }

    
    strcat(buffer, source);

   
    strcpy(source, buffer);
}

int main() {
    char source[1024] = "This is test time";
    char find[10] = "is";
    char replace[10] = "was";

    printf("Original String: %s\n", source);
    findAndReplace(source, find, replace);
    printf("Modified String: %s\n", source);

    return 0;
}

