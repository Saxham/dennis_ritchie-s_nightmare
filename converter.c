#include<math.h>
#include<stdio.h>
void rev(int a)
{
	int r,s=0;
	while(a!=0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	printf("the converted value is : %d",s);
}
int conv(int n,int b)
{
	int r,a=0;
	while(n!=0)
	{
		r=n%b;
		a=a*10+r;
		n=n/b;
	}
   	return a;
}
void dec()
{
	int size;
	printf("enter the length of your binary no.:\n");
	scanf("%d",&size);
	int b[size],d=0,a,i;
	printf("enter the digits one by one:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=size-1;i>=0;i--)
	{
		a=pow(2,i);
		d=(b[size-1-i]*a)+d;
	}
	printf("the dec value is:%d",d);
}
int main()
{
	int n,c,o,h;
	printf("enter the type of conversion:\n1. octal conversion \n2. hexadecimal conversion\n3. decimal to binary conversion\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("enter the decimal no.: ");
			scanf("%d",&n);
			o=conv(n,8);
	        rev(o);
	        break;
		case 2:
			printf("enter the decimal no.: ");
			scanf("%d",&n);
		    h=conv(n,16);
			rev(h);
			break;		
		case 3:
		    dec();
			break;	
	}
 return 0;
}

