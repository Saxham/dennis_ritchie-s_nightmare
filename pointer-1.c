#include<stdio.h>

int main()
{ 
 int n,*p,f=1;
 int a;
 printf("enter the no: ");
 scanf("%d",&n);
 a=n;
 p=&n;
 *p=a;
 while(n!=0)
 {
 	f=f*n;
 	n--;
 }
 printf("the adress is %p and the factorial is %d and %d",p,f,*p);
 return 0;
}

