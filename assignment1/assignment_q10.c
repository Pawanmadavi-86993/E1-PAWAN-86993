#include<stdio.h>
#include<math.h>

int main()
{    
 int a, b, c, s;
  printf("enter the number:");
  scanf("%d%d%d",&a,&b,&c);
    
	s= a+b+(c*a)+b+c;

	 printf("a. Perimeter = %d\n",s);
	 

    float r= sqrt( s*(s-a)*(s-b)*(s-c)); 
	
    
	printf("Area = %f\n", r);

 
  
 
   


   return 0;
}
