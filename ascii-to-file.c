#include<stdio.h>
#include"ASCII.h"
int main()
{
 int array[3][3],i,j;
 FILE* fp=fopen("array.txt","w");
 ascii_display();
 for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("enter the value for pos %d %d: ",i+1,j+1);
 		scanf("%d",&array[i][j]);
 		fprintf(fp,"%d",array[i][j]);
	 }
 }
fclose(fp);
for(i=0;i<3;i++)
 {
 	for(j=0;j<3;j++)
 	{
 		printf("ASCII character value for pos %d %d is %c\n: ",i+1,j+1,array[i][j]);
	 }
 } 
 return 0;
}

