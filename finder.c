#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10]={'c','h','a','r','a','c','t','e','r','s'},str2[10];
	int c=0;
	printf("enter the word to search: ");
	gets(str2);
	c=strcmp(str1,str2);
	if(c=0)
	{
		printf("found\n");
		puts(str2);
	}
	else
	{
		printf("not found");
	}
 return 0;
}

