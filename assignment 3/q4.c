#include<stdio.h>


int main()
{ 
	int a=5, res=1, i=1 ;

  while (i<=5)
  {
   printf("%d * ",i);
    res=res * i;
	i++;
   
   
 }
 printf("\b\b= %d",res);
  

 return 0;
}
