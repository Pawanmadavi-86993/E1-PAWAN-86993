#include<stdio.h>
int main ()
{

   int quantity;
   float price;
   printf("enter the quantity of the unit:");
   scanf("%d",&quantity);
 
    
	if (quantity>=30 && quantity<=50)
	{  
	  price = 5-0.5;
	  printf("The price of per unit after 10%% discount is = %.2f\n",price);
	  printf("Total price = %lf\n",quantity*price);

	}
     else
	  
	   if (quantity > 50)
	 {   
      price =5-0.75;  

	  printf("The price of per unit after 15%% discount is = %.2f\n",price);

	  printf("Total price = %lf\n",quantity*price);
	 }
	 else(quantity<=30);
	 {
	 printf("no discount Total price = %ld\n",5*quantity);
     }





   return 0;
}

