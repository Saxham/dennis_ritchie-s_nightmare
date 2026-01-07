#include<stdio.h>
#include<conio.h>
struct employee{
	int empid;
	char fname[30];
	int salary;
};
void read()
{
	struct employee e;
	FILE *fp;
	fp=fopen("employee.txt","r");
	char c='y';
	while(c!='n')
	{
	 printf("\nEmp_ID  Name  Salary\n");
	 while(fscanf(fp,"%d\t%s\t%d",&e.empid,e.fname,&e.salary)!=EOF)
	 {
		  printf("%d\t%s\t%d\n",e.empid,e.fname,e.salary);
	 }
	 printf("want to read again:(y/n)\n");
	 c=_getch();
}
 fclose(fp);
}
void write()
{
	struct employee e;
	FILE *fp;
	fp=fopen("employee.txt","w");
	char c='y';
	while(c!='n')
	{
		printf("\nEnter Emp_id: ");
		scanf("%d",&e.empid);
        printf("Enter employee name: ");
		scanf("%s",e.fname);
		printf("Enter Employee salary: ");
		scanf("%d",&e.salary);
		fprintf(fp,"%d\t%s\t%d\n",e.empid,e.fname,e.salary);
		printf("add more(y/n): ");
		c=_getch();		
	}
	fclose(fp);
}
void append()
{
	struct employee e;
	FILE *fp;
	fp=fopen("employee.txt","a");
	char c='y';
	while(c!='n')
	{
		printf("\nEnter Emp_id: ");
		scanf("%d",&e.empid);
        printf("Enter employee name: ");
		scanf("%s",e.fname);
		printf("Enter Employee salary: ");
		scanf("%d",&e.salary);
		fprintf(fp,"%d\t%s\t%d\n",e.empid,e.fname,e.salary);
		printf("add more(y/n): ");
		c=_getch();		
	}
	fclose(fp);
}
int main()
{
 int choice;
 char ch='y';
 printf("Welcome to the file editor:\n");
 while(ch!='n')
 {
      printf("\n1.Write\n2.New entry\n3.Read\n4.exit");
      scanf("%d",&choice);
      switch(choice)
 	{
 		case 1:
 			{
 			   write();
 			   break;
			  }
 		case 2:
		 {
		 	    append();
		 	    break;
			 }	
		case 3:
			{
				read();
				break;
			}
			case 4:
				break;
	 }
	 printf("continue editing:\n");
	 ch=_getch();
}
 return 0;
}

