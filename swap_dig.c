#include<stdio.h>
#include<math.h>
int main()
{
 int n,z,r,c=0,m,f,l,ne=0;
 printf("enter the no: ");
 scanf("%d",&n);
 z=n;
 l=n%10;
 while(n!=0)
 {
 	c++;
 	n=n/10;
 }
 f= z/pow(10,c-1);
 m=z-pow(10,c-1)-l;
 ne=l*pow(10,c-1)+m+f;
 printf("%d",ne);
 return 0;
}

