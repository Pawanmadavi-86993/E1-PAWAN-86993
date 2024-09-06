#include<stdio.h>
int main()
{ 
 int x , y;
 printf("Enter the co-ordinates x , y");
 scanf("%d%d", &x, &y);

 if(x>0 && y>0)
 {
  printf("co-ordinates in quadrant 1\n");
 }
 else if(x<0&&y<0)
 {
   printf("co-ordinates in Quadrant 3\n");
 }
 else if(x<0 && y>0)
 {
 printf("co- ordinates in Quadrant 2\n");
 }
 else if(x>0 && y<0)
 {
  printf("co-ordinates in Quadrant 4\n");
 }
 else if(x>0 && y==0)
 {
  printf("co-ordinates on X-axis\n");
 }
 else if(x==0 && y>0)
 { 
 printf("co-ordinates on Y-axis\n");
 }
 else 
 {
  printf("co-ordinates at center\n");
 }





return 0;
}
