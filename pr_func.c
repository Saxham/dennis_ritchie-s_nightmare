#include<stdio.h>
void area(int r)
 { 
     float a;
     printf("enter the radius");
     scanf("%d",&r);
     a=3.141*r*r;
 	printf("the area is %f",a);
 }
 void circ(int r)
 {  
     float c;
     c=2*3.141*r;
 	printf("the circumference is %d",c);
 }
int main()
{
	int r;
	void area(r);
	void circ(r);
}
 
