#include<stdio.h>

int main()
{
   int num1, num2, res;
   char op;


   printf("Enter the  first value:");
   scanf("%d",&num1);
   printf("enter the second value:");
   scanf("%d",&num2);

   printf("Enter the opretor (+, _, *, /)");
   scanf("%*c%c",&op);

 switch (op)
 {
   case '+':
           res= num1+num2;
           printf("Add = %d\n",res);
		   break;

   case '-': 
            res=num1-num2;
            printf("Sub= %d\n",res);
			break ;
  
  case '*': 
            res= num1*num2;
            printf("Mul= %d\n",res);
			break ;
  
  case '/': 
          if(num2!=0)
           {
            printf("div = %d\n",num1/num2);
           }
            else
			{
             printf("num2 / divisor is zero");
			}

            break;


 }
 
   
    

return 0;
}

