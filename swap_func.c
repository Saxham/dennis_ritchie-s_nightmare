#include<stdio.h>
int swap(int *p, int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	return 0;
	}
	
void draw(int in,int o)
{
	int i,j;
	printf("enter the display size in l and b:")
	printf("%d%d",&in,&o);
	
}
int main()
{
 int a,b;
 printf("enter the 2 nos:\n");
 scanf("%d%d",&a,&b);
 swap(&a,&b);
printf("the swapped vlaues are %d and %d",a,b);
 return 0;
}

