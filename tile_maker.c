
#include<stdio.h>   //this ptogram iwll serve as an interface for user to sleect a                      
#include<conio.h>  //update the program is now a tile maker and saves tile and its details in a file
#include<stdlib.h>
#include<string.h>/*block or tile whatever it might bt and fill it with ascii characters nothing fancy just simple ocde!*/
#include"ASCII.h"  // update on the code so no requirement for 2 functions one for displaying and other for storing nwo all down under render fucntion

#define height 3  //log : 10/19/2024 now adding file system to see if it works or not
#define width  3

struct tile{
    int pixel[3][3];
	int tile_code;
	char tile_name[20];
}t;

void render(int x,int y,int flag)
{
	static struct tile t;
	int i,j,ch;
	for(i=0; i<height; i++)
	{
		for(j=0;j<width;j++)
		{
			if(i==x && j==y)
			{
				if(flag==1)
	       	           {
			              ascii_display();
			              printf("\nwhat char no would you like to enter starting from 32: ");
			              scanf("%d",&ch);
		   	              system("cls");
			              printf("\n\n");
			              t.pixel[x][y]=ch;
				          printf("%c",t.pixel[x][y]);
				          
		                  break;	
			        }	
		       else
			   {
		    	     printf("0");
			       }
		   }
			else if(t.pixel[i][j]>=32 && t.pixel[i][j]<=255)
			{
                printf("%c",t.pixel[i][j]);
                FILE* fp=fopen("tiles1.txt","a");
				fprintf(fp,"%d ",t.pixel[i][j]);
		     }
		    else
		     {
				printf(".");
		    }		    
	}
	printf("\n");
}
}
 void create_tile()
{
 static struct tile t;	
 FILE *fp=fopen("tiles1.txt","a");	
 int cursor_x=1,cursor_y=1,run;
 int i,j;
 printf("enter the tile name: ");
 scanf("%s",t.tile_name);
 printf("enter the tile code: ");
 scanf("%d",&t.tile_code);	
 fprintf(fp,"\n %s %d \n",t.tile_name,t.tile_code);
 fclose(fp);
 printf("\nW,A,S,D to move cursor\n");
 while(run!=1)
 {
 	if(_kbhit())            //taking imput and 0 serving as a cursoe to navigate around the space to be filled
     switch(getch())
 	   {
 	    int ch=0;
 		case 'w':
 			cursor_y--;
 			system("cls");
 			if(cursor_y<=0)
 			{
 			   cursor_y=0;
 		}
 		    	render(cursor_y,cursor_x,ch);
 			break;
 		case 'a':
 			system("cls");
 			cursor_x--;
 			if(cursor_x<=0)
 			{
 				cursor_x=0;
 			}
 		    	render(cursor_y,cursor_x,ch);    
 			break;
		case 's':
			 cursor_y++;
			 system("cls");
			 if(cursor_y>=2)
			 {
			   cursor_y=height-1;
 		     }
 		    	render(cursor_y,cursor_x,ch);		     	
 			break;
		case 'd':
			cursor_x++;
			system("cls");
			if(cursor_x>=2)
			{
 			   cursor_x=width-1;
 		}
 			render(cursor_y,cursor_x,ch);
 			break;
 		case 'e':
 			{
 				int ch=1;
 				render(cursor_y,cursor_x,ch);
 				break;
			 }
		case 'q':
		    run=1;
			break;	 	
	 }
  } 
}
int main()
{
    char user_input[5]="y";
    while (strcmp(user_input,"y")==0)
    {
    	create_tile();
    	printf("create one more tile or leave it for next day(y/n): ");
    	scanf("%s",user_input);
	}
	return 0;
}


