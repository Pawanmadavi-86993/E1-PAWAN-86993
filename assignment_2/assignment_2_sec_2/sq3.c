#include<stdio.h>

int main()
{
  int emp_id, dept_no;
  char Dc;
  printf("Enter the employee Id:");
  scanf("%ld",&emp_id);
  printf("Enter the Dept_no:");
  scanf("%d",&dept_no);
  printf("Enter Designation code:");
  scanf("%*c%c",&Dc);
  

 switch (dept_no)
 {

 case 10:
         printf("Employee with employe Id= %d working in Marketing Department",emp_id);
          break;
 
 case 20:
        printf("Employee with employe Id= %d working in Management Department ",emp_id);
		break ;

 case 30:
        printf("Employe with employye Id= %d working in Sale Department ",emp_id);
		break ;

 case 40:
        printf("Employe with employe Id= %d working in Designing ",emp_id);
        break ;

 default : printf("INvalid Dept_no= %d",dept_no);		

 }
   
   switch (Dc)
   {
     case 'M': printf("as Manager.\n");
	        break ;

	 case 'S': printf("as Supervisor.\n");
	        break ;

	 case 's': printf("as Security Officer.\n");
	         break ;

	 case 'C': printf("as Clerk.\n");		 
               break ;
 }


 return 0;
}
