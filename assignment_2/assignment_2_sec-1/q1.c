#include<stdio.h>

int main()
{
  int a , b;
  printf("Enter the two number:");
  scanf("%d%d",&a,&b);
  if(a!=0)
  {
   printf("div = %d\n",a/b);
    
  }
  else
  {
    printf("divisor is zero\n");
  }


  return 0;
}
