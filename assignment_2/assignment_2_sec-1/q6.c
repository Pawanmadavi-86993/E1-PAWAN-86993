 #include<stdio.h>


int main ()
{
	int num, a, c ;
	int  b=0;
  printf("Enter the number:");
  scanf("%d",&num);

  while(num != 0)
  {
    a= num % 10;
	b= b*10+a;
	num = num/10;
  }
   printf("Palindrome =  %d", b);


   return 0;
}
