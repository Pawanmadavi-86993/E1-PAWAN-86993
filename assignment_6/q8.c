#include <stdio.h>

void printInWords(int n) {
    
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    
    if (n >= 1000) {
        printf("%s thousand ", ones[n / 1000]);
        n = n % 1000;
    }
    
    
    if (n >= 100) {
        printf("%s hundred ", ones[n / 100]);
        n = n % 100;
        if (n > 0) {
            printf("and ");
        }
    }
    
   
    if (n >= 10 && n <= 19) {
        printf("%s ", teens[n - 10]);
        return;
    }
    
    
    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n = n % 10;
    }
    if (n > 0) {
        printf("%s ", ones[n]);
    }
    
    if (n == 0) {
        printf("zero ");
    }
}

int main() {
    int number;

  
    printf("Enter a number (0-9999): ");
    scanf("%d", &number);

    
    if (number < 0 || number > 9999) {
        printf("Number out of range. Please enter a number between 0 and 9999.\n");
    } else {
        printInWords(number);
    }
    
    return 0;
}

