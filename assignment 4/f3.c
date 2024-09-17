#include<stdio.h>

  int accep_num1(void);
  int accep_num2(void);
  char cho_op(void);
  int add_num(int a, int b);
  int sub_num(int a, int b);
  int mul_num(int a, int b);
  int div_num(int a, int b);
int main()
{
  int num1, num2;
  char op;
  num1= accep_num1();

  num2= accep_num2();
 printf("n1= %d  n2= %d\n",num1, num2);
  
  op= cho_op();
  
  switch(op)
  {
     case '+':
	          printf("Add = %d",add_num(num1, num2));
			  break ;
			   
	 case '-':
	          printf("Sub = %d", sub_num(num1, num2));
			  break ;
     
	 case '*':
              printf("Mul = %d", mul_num(num1, num2));
			  break ;

     case '/':
	         printf("Div = %d",div_num(num1, num2));
			 break;

  }

 return 0;
}


int accep_num1(void)
{
int n1;
 printf("Enter the number:");
 scanf("%d",&n1);
 return n1;
}

int accep_num2(void)
{
int n2;
 printf("Enter the number:");
 scanf("%d",&n2);
 return n2;
 }

 char cho_op(void)
 {
 char ch;
 printf("Chioce the operation(+,-,*,/):");
 scanf("%*c%c",&ch);
return ch;

 }

  int add_num(int a, int b)
  {
   int res= a+b;
   return res;
  }

  int sub_num(int a, int b)
  {
   int res= a-b;
   return res;
  }

  int mul_num(int a, int b)
  {
   int res= a*b;
   return res;
  }
  int div_num(int a, int b)
  {
  int res;
   if (b!=0)
   {
    res= a/b;
	return res;
	}
	 
  }
