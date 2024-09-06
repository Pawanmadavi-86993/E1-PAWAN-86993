#include<stdio.h>
int main()
{
   int num;
   printf("Enter the number:");
   scanf("%d",&num);
   if(num>0)
   {
     printf("Number is +ve\n");
   }
   else if(num<0)
   {
    printf("Number is -ve\n");

   }
   else
   printf("Number is 0\n");

  return 0;
}
