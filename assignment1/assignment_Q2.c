#include<stdio.h>

int main()
{
  char a,b;
  printf("Enter the frist chareactor:");
  scanf("%*c%c ",&a);
 printf("Enter the second chareactor:");
 scanf("%*c%c",&b);
  
  int add = a+b;
  int sub = a-b;
  int prod = a*b;
  printf("add = %d \n",add);
  printf("sub = %d \n",sub);
  printf("prod = %d \n",prod);
  return 0;
}
