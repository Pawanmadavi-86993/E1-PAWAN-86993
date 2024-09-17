#include <stdio.h>

void findAndReplace(char *source, const char *find, const char *replace) {
    char result[1024];    
    int i = 0, j = 0, k;
    int sourceLen = 0, findLen = 0, replaceLen = 0;

    
    while (source[sourceLen] != '\0') sourceLen++;
    while (find[findLen] != '\0') findLen++;
    while (replace[replaceLen] != '\0') replaceLen++;

    
    while (i < sourceLen) {
        
        for (k = 0; k < findLen && (i + k) < sourceLen; k++) {
            if (source[i + k] != find[k]) {
                break;
            }
        }

        
        if (k == findLen) {
            for (k = 0; k < replaceLen; k++) {
                result[j++] = replace[k];
            }
            i += findLen; 
        } else {
            
            result[j++] = source[i++];
        }
    }

    
    result[j] = '\0';

    
    for (i = 0; result[i] != '\0'; i++) {
        source[i] = result[i];
    }
    source[i] = '\0';  
}

int main() {
    char source[1024] = "This is test time";
    char find[] = "is";
    char replace[] = "was";

    printf("Original String: %s\n", source);
    findAndReplace(source, find, replace);
    printf("Modified String: %s\n", source);

    return 0;
}

