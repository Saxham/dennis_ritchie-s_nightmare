#include<stdio.h>
#include<string.h>

int main()
{
	int l,i;
	char name[20],str2[20],str3[20];
	printf("enter the word: ");
	gets(name);
	printf("enter the 2nd word: ");
	gets(str2);
	str3=strcat(name,str2);
	pritnf("%s",str3);
	return 0;
}
