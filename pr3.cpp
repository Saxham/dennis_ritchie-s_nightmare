#include <stdio.h>

int main()
{
	int i,a[20],count_age=0;
	printf("enter the ages: \n");
	for (i=0;i<=19;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=19;i++)
	{
		if(a[i]>20 && a[i]<25)
		{
			count_age=count_age+1;
		}
	}
	printf("the no students is %d",count_age);
	return 0;
}
