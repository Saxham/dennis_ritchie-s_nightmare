#include<stdio.h>

int main()
{
	char a[8]={'p','u','l','c','h','w','o','k'};
	int i,j,b=7,c=7;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf(" ");
		}
		for(j=b;j<=7;j++)
		{
			printf("%c ",a[j]);
		}
		printf("\n");
		b=b-1;
		c=c-1;
	}
 return 0;
}

