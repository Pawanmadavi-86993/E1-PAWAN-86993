#include<stdio.h>

int main()
{
  int i=1, n, t1=0, t2=1, nextterm;
  printf("Enter the number");
  scanf("%d",&n);

  while(i<=n)
  { printf("%d",t1);
  nextterm= t1+t2;
  t1=t2;
  t2=nextterm;


  }

 return 0;
}
