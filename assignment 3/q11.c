#include<stdio.h>
int main()
{  
int num,i=1, n=1;
printf("Enter the number : ");
scanf("%d", &num);
for(int i=1; i<=num; ++i)
{
  n=n*i;
 printf("%d\n",n);
}

  return 0;
}
