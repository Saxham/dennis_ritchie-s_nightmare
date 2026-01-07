#include<stdio.h>
//swapping structures
struct array{
	int a[2][2];
};
int main()
{
 int i,j;
 struct array a1,a2;
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
       scanf("%d",&a1.a[i][j]); 	
   }
 }
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
       scanf("%d",&a2.a[i][j]); 	
   }
 }
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
       printf("%d",a1.a[i][j]); 	
   }
   printf("\n");
 }
  for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
       printf("%d",a2.a[i][j]); 	
   }
   printf("\n");
 }
 struct array temp;
 temp=a1;
 a1=a2;
a2=temp;
 for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
       printf("%d",a1.a[i][j]);; 	
   }
   printf("\n");
 }
  for(i=0;i<=1;i++)
 {
  for(j=0;j<=1;j++)
   {
       printf("%d",a2.a[i][j]);	
   }
   printf("\n");
 }
 return 0;
}

