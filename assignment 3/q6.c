#include<stdio.h>


int main()
{
  int num, i=1;
  printf("Enter the number:");
  scanf("%d",&num);

while(i<=num/2)
{ 
  if(num%i==0)
  {
   printf("%d ",i);
   
  }
  i++;
}





 return 0;
}
