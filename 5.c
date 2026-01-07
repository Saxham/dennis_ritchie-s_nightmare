#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=4;j++)
			{
				printf("*");
			}
		}
		else
		{
			printf(" ");
			for(j=1;j<=2;j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
