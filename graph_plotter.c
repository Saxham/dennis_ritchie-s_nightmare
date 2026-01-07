#include<stdio.h>

int main()
{
 int i,j;
 char a[50][50];
 for(i=0;i<50;i++)
 {
 	for(j=0;j<50;j++)
 	{
 	   if(j==24)
 	   {
 	   	 printf("|");
		}
		else
		{
			printf(".");
		}
	 }
	 printf("\n");
	 }	
 return 0;
}

