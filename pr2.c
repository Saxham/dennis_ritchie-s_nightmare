#include<stdio.h>

int main()                                                                       //2,1,5,3,4 >>>>> 1,2,3,4,5
{
	int a[3][3],b[3][3],i,j;
	printf("enter array data entries for first matrix \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		 scanf("%d",&a[i][j]);
		}
	
	}
	printf("enter array data entries for second matrix \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		 scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		 printf("%d ",a[i][j]);
		}
		printf("\t");
		for(j=0;j<=2;j++)
		{
		 printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("so the sum of matrix A and B is: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		 printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
