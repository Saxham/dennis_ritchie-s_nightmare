#include<stdio.h>

int main()
{
	int a[5]={2,6,3,8,4},i,j,temp;
   for(i=0;i<=4;i++)
   {
   	for(j=i;j<=4;j++)
   	{
   	 if(a[i]>a[j])
   	 {
   	    temp=a[i];
   		a[i]=a[j];
   	   	a[j]=temp;
	   }
   }
}
   for(i=0;i<=4;i++)
   {
   	printf("%d ",a[i]);
   }
	return 0;
}
