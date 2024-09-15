#include<stdio.h>

int main()
{  
int base, index,num=1;
printf("Enter the base  and  index:");
scanf("%d%d",&base, &index);

for(int i=1; i<=index; i++)
{
 num= base*num;
}

  printf("%d",num );

 return 0;
}
