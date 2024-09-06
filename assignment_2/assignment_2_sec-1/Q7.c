#include<stdio.h>
int main()
{
  int year;
  printf("Enter the year:");
  scanf("%d",&year);


  if ((year % 4 ==0 && year % 100 !=0)||(year % 4 == 0))
  {
      printf("The given year is leap year having 366 days ");
    
  }
  else
  {

   printf("year having 365 days");
  }


  return 0;
}
