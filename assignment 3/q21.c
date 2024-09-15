q
#include <stdio.h>

int main()
{
  int i, a = 1, count1, count2;


  while(a <= 100)
  {

    count1= 0;
    count2= 0;
  i = 2;
    while(i <= a/2)
    {
      if(a%i == 0)
      {
        count1++;
	break;
      }
      i++;
    }
    if(count1 == 0 && a != 1 )
    {
	if (a >7)
	  {
       while(count2 == 5)
	   
	  
	  printf("%d", a);
	   
	  }
    
	
	
    }
    a++;
  }
  
   
  return 0;
}


  
