#include<stdio.h>

int main()
{
 int n,r,s=0;
 printf("Enter the value of n: ");
 scanf("%d",&n);
 r=n%10;
 s=s*10+r;
 n=n/10;	
 r=n%10;
 s=s*10+r;
 n=n/10;
 r=n%10;
 s=s*10+r;
 n=n/10;
 printf("The reverse digit:%5d",s);
 return 0;
}

