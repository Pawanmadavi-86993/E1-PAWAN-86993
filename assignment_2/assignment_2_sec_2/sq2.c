#include<stdio.h>


   int int_Add(int a, int b);

   int int_Sub(int a, int b);

   int int_Mul(int a, int b);

   int int_Div(int a, int b);


int main()
{
   int a, b;
  enum opretor{Add=1, Sub, Mul, Div}op1;
   
   printf("1.Add\n2.Sub\n3.Mul\n4.Div\n");
   scanf("%d",&op1);
   printf("Enter the two number:");
   scanf("%d%d",&a,&b);
  
     switch(op1)
      	{
           case 1: printf("Add= %d\n",int_Add( a, b));
		           break ;

	       case 2: printf("Sub= %d\n",int_Sub(a, b));
		          break;
		
		   case 3: printf("Mul= %d\n",int_Mul(a, b));
		           break;

		   case 4: printf("Div= %d\n",int_Div(a,b));

	  
 }

   int int_Add(int a, int b)
   {
     return a+b;
   }

   int int_Sub(int a, int b)
   {
    return a-b;
   }
   
   int int_Mul(int a, int b)
   {
    return a*b;
   }

   int int_Div(int a, int b)
   {
     if(b!=0)
	 {
     return a/b;
	 }
	

   }




   return 0;
}
