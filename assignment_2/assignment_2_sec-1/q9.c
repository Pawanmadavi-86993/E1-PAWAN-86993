#include<stdio.h>


int main()
{


  enum month {jan=1 , feb, mar, apr, may, jun, jul, aug, sep, oct,nov, dec} m1;
   
  
  int y,l,nl;

  printf("enter month and year:");
  scanf("%d%d",&m1,&y);


   ( (y%400==0 && y%100!=0)||y%4==0)?(l=1):(nl=1);
	   

	   if(l==1)
	   { 
	     if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
		 {
          printf("month have 31 days:\n");
		 }
		 else if(m1==4||m1==6||m1==9||m1==11)
		 {
		 printf("month have 30 days:\n");

		 }
		 else if(m1==2)
		 {
          printf("month have 29 days:\n");
		 }

	   printf("this is leap year.\n");
	   }
	   else 
	   { 
	     

		 if(nl==1)
	     {    
	     if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
		 {
          printf("month have 31 days:\n");
		 }
		 else if(m1==4||m1==6||m1==9||m1==11)
		 {
		 printf("month have 30 days:\n");

		 }
		 else if(m1==2)
		 {
          printf("month have 28 days:\n");
		 }

	   }

      printf("this is not a leap year.");
	   }



   return 0;
}
