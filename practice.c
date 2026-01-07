#include<stdio.h>
#include<strings.h>

int main()
{
	char str1[]="geeks",str2[]="geekforgeeks",str3[]="";
	str3[]=strcpy(str1,str2);
	printf("the length of the string is : %s",str3);
	return 0;
}
