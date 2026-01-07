#include<stdio.h>
#include<string.h>
int main()
{
 char str1[5],str2[5];
 float a,i;
 gets(str1);
 gets(str2);
 a= strcmp(str1,str2);
 printf("%f",a);
 return 0;
}

