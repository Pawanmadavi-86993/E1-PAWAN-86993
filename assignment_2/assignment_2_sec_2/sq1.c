#include<stdio.h>


int main()
{


  enum month {jan=1 , feb, mar, apr, may, jun, jul, aug, sep, oct,nov, dec} m1;
 int y,l;

  printf("enter month and year:");
  scanf("%d%d",&m1,&y);

  ( (y%400==0 && y%100!=0)||y%4==0)?(l=1):(l=0);
  switch (l)
  {
  case 1 : 
         if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
          
		  printf("Month having 31 days.\n");
		 
		 if(m1==4||m1==6||m1==9||m1==11)
         
		 printf("month having 30 days.\n");
	     
		 if(m1==2)
		 
		 {
           printf("Month having 29 days.\n");
		  }
            break;
 case 0 :
         
         if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
           printf("Month having 31 days.\n");
		 if(m1==4||m1==6||m1==9||m1==11)
         printf("month having 30 days.\n");
	      if(m1==2)
		  {
           printf("Month having 28 days.\n");
		  }
        
		break;
   }   
	 


  
   return 0;
}
