#include<stdio.h>

int main()
{
	int i,j,a=1;
	for(i=1;i<=4;i++)
	{
	 for(j=3;j>=i;j--)
	 {
		printf(" ");
	 }
	 for(j=1;j<=a;j++)
	{
		printf("*");
	 }
	 printf("\n");
	 a=a+2;
}
a=a-2;
for(i=1;i<=4;i++)
{
	for(j=2;j<=i;j++)
	{
		printf(" ");
	}
	for(j=1;j<=a;j++)
	{
		printf("*");
	}
	printf("\n");
	a=a-2;
}
 return 0;
}

