#include<stdio.h>
//Binary sorting an array
int main()
{
 int a[10],i,t,up,low,mid;
 printf("enter the data entries for the array:\n");
 for(i=0;i<10;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("enter the data to be found: ");
 scanf("%d",&t);
 low=0;
 up=9;
 while(low<=up)
 {
 	mid=low+(up-low)/2;
 	if(t==a[mid])
 	{
 		printf("%d is found and is at %d",t,mid);
	 	break;
	 }
	 else if(t<a[mid])
	 {
	 	up=mid-1;
	 }
	 else
	 {
	 	low=mid+1;
	 }
}
 if (low > up) {
        printf("%d is not found in the array.\n", t);
    }	
 return 0;
}

