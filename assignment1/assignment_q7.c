#include<stdio.h>
int main()
{
  int num,rev,res, count;
  int a,b,c,d,e,f,g,h;
  printf("Enter the number:");
  scanf("%d",&num);
   
 a =num%10;
 b =num/10;

 c =b%10;
 d =b/10;

 e =d%10;
 f =d/10;

 printf("a.%d %2d %2d %2d \n",f,e,c,a);
 

printf("b.%d =%d + %d + %d + %d \n",num,f*1000,e*100,c*10,a);
 printf("c.%d%d%d%d\n",a,c,e,f);




  return 0;

}
