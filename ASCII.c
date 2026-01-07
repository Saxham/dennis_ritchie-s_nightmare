#include<stdio.h>
//prints out all the ASCII chearcters present
int main()
{
 int i=0;
 for(i=0;i<=255;i++)
 {
 	printf("%d\t%c\n",i,i);
 }
 return 0;
}

