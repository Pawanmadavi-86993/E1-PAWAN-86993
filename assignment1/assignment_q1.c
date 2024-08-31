#include<stdio.h>
// write a program to accept number and find arithmatic opreation
 int main()
 { 
  unsigned int a, b;
  char x,y;
  int add, sub, prod;
 
   printf("Enter the number");
   scanf("%d%d",&a,&b);
 

   add = a+b;
  printf("add = %d \n",add);
  
  sub = a-b;
  printf("sub = %d \n",sub);
  
  prod =a*b;
  printf("prod = %d",prod);


	return 0;
 }
