#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char a[7],str;
	for(i=0;i<=7;i++)
	{
		scanf("%s",a[i]);
	}
	printf("search: ");
	gets(str);
	for(i=0;i<=4;i++)
	{
		if(strcmp(a[i],str)==0)
		{
			puts(a[i]);
		}
	}
	return 0;
}
