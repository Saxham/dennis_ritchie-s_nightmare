#include<stdio.h>
//prints out all the ASCII characters present
void ascii_display()
{
   int i=0;
   printf("*");
   for(i=1;i<=150;i++)
   {
 	  printf("-");
  }
   printf("*\n");
   for(i=33;i<=255;i++)
   {
 	  printf("|%d\t%c\t| ",i,i);
   }
   for(i=1;i<=120;i++)
   {
 	  printf("-*");
   }
   printf("\n");
}

