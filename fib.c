#include<stdio.h>
int fib(int);
int main()
{
 int n,i;
 printf("enter the no of terms \n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	printf("%d ",fib(n));
 }
 return 0;
}
int fib(int n)
{
	if(n==1 || n==0)
	{
		return n;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}

