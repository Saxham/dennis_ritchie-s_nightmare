#include<stdio.h>

int main()
{
  int a[5],i,temp,j;
  printf("enter your data one by one:\n");
  for(i=0;i<=4;i++)
  {
  	scanf("%d",&a[i]);
  }
  for(i=0;i<=4;i++)
  {
  	for(j=0;j<=4;j++)
  	{
  		if(a[i]<a[j])
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

