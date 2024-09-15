#include<stdio.h>
int main()
{
 int num,i=1,j;
 printf("Enter the number:");
 scanf("%d", &num);

 while(i<=5)
 {
    if(num%i==0)
	{
	  j= num/i;
      printf("%d * %d = %d\n",i,j,num );
	}
    
	i++;

 }



 return 0;
}
