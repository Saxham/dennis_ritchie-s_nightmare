#include<stdio.h>

int main()
{
	int i,j,a[3][3],b;
	printf("enter array data entries \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		 scanf("%d",&a[i][j]);
		}
	}
	printf("enter the data to be found: ");
	scanf("%d",&b);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		 if(a[i][j]==b)
		 {
			printf("Found!");
		  }
		}
	}
	if(a[i][j]!=b && i>2)
	{
		printf("Not Found!");
	}
	return 0;
}
