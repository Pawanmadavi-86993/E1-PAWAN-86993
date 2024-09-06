#include<stdio.h>
int main ()
{

   int qua;
   float price;
   printf("enter the quantity of the unit:");
   scanf("%d",&qua);
 
    
	if (50>= qua >=30)
	{
     price = 5 *((100-10/100)/100);  
	 
	  printf("the price of per unit after 10%% discount is = %.2f\n",price);

	}
     else
	 { 
	   if (qua > 50)
	    
       price = 5 *((100-15/100)/100);  
     

	  printf("the price of per unit after 15%% discount is = %.2f\n",price);

	 }






   return 0;
}

