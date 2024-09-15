#include<stdio.h>
int main()
{
int a, b;
printf("enter the range:");
scanf("%d%d",&a,&b);
for(int i=1; i<=10; i++)
{
for (int j = a; j<=b; j++)
{
 printf(" %-3d ",j*i);
}
 printf("\n");
}
  return 0;
}
