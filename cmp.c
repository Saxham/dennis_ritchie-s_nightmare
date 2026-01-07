#include<stdio.h>
#include<string.h>
int main()
{
	int a=0;
	char str1[5],str2[5];
	gets(str1);
	gets(str2);
	a= strcmp(str1,str2);
	printf("%d",a);
	puts(str1[2]);
 return 0;
}

