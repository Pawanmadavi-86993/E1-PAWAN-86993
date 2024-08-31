#include<stdio.h>
int main ()
{
 int C, F;
 printf("Enter the Temp in F:");
 scanf("%d",&F);
 int c= ((float)5/9)*(F-32);
 printf("convert temp  F to C =%d\n",c);
  
 printf("Enter the temp in C:");
 scanf("%d",&C);
 int f=(C*((float)9/5)+32);
 printf("convert temp C to F= %d\n ",f);


  return 0;
}

