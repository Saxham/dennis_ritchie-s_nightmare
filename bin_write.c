#include<stdio.h>

int main()
{
 FILE *fp;
 int i,n;
 fp=fopen("data.bin","wb");
 for(i=0;i<=3;i++)	s 
 {
 	scanf("%d",&n);
 	putw(n,fp);
 }
 fclose(fp);
 return 0;
}

