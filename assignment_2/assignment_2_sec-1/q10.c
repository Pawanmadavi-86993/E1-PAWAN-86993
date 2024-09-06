#include<stdio.h>


int main()
{
 char ch;
  printf("Enter the chararetor:");
  scanf("%c",&ch);

  if( ch>=65 && ch<=122)
  { 
    if(ch<=90 && ch>=65)
	{
    printf("Alphabet- uppercase");
    }
	else if(ch>=97 && ch<=122)
	{
     printf("Alphabet- lowercase");
	}
  }
  else if(ch>=48 && ch<=57) 
       {
        printf("Digit");
	   }
	else if(ch==32 || ch==9 || ch==13 || ch==10)
	{
    printf("space");
	}
	else 
	{
    printf("not above list");
	}


  
  



  
	






   return 0;
}
