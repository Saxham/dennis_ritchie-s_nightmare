
#include<stdio.h>
int main()
{
 int a[2][3], b[3][2],c[2][2],i,j,k,s=0;
 printf("enter the data set for 1st matrix;\n");
 for(i=0;i<=1;i++)
 {
 	for(j=0;j<=2;j++)
 	{
 		scanf("%d",&a[i][j]);
	 }
 }
 printf("enter the data set for 2nd matrix;\n");
 for(i=0;i<=2;i++)
 {
 	for(j=0;j<=1;j++)
 	{
 		scanf("%d",&b[i][j]);
	 }
 }
 for(i=0;i<=1;i++)
 {
 	for(j=0;j<=1;j++)
 	{
 		s=0;
 		for(k=0;k<=2;k++)
 		{ 
 			s+=a[i][k]*b[k][j];;
		 }
		 c[i][j]=s;
	 }
 }
 printf("the matrix multiplication is:\n");
 for(i=0;i<=1;i++)
 {
 	for(j=0;j<=1;j++)
 	{
 		printf("%d ",c[i][j]);
	 }
	 printf("\n");
 }

 return 0;
}

