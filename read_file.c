#include<stdio.h>
struct employee{
	int emp_id;
	char emp_name[30];
	int salary;
};
int main()
{
 struct employee e;	
 FILE *fp;
 fp = fopen("employee.txt","r");
 while(fscanf(fp,"%d%s%d",&e.emp_id,e.emp_name,&e.salary)!=EOF)
 {
 	if(e.salary>45000)
 	  printf("%d\t%s\t%d\n",e.emp_id,e.emp_name,e.salary);
 }
 return 0;
}

