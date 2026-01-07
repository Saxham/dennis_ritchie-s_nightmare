#include<stdio.h>

int main()
{
 char na[30];
 printf("enter teh file name: ");
 scanf("%s",na);
 FILE *fp;
 fp= fopen(na,"w");
  fprintf(fp,"welcome the tile maker");	
 fclose(fp);
 return 0;
}

