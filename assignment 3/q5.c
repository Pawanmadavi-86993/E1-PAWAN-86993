#include<stdio.h>
   
   
   int main()                                                                                                                                          
   {
       int a=5, res=1, i=5 ;
   
     while(i>=1)
     {
       printf("%d * ",i);
      res=res * i;
      i--;
  
  
   }
   printf("\b\b= %d",res);
  
  
   return 0;
  }

