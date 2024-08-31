#include<stdio.h>
int main()
{
  int num,res;
  printf("Enter the number :");
  scanf("%d",&num);
  for(int n=1;n<=10;n++)
  {
  res= num*n;
  printf("res= %d\n",res);

  }
  return 0;
}
