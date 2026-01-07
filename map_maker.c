#include<stdio.h>   //this ptogram iwll serve as an interface for user to sleect a                      
#include<conio.h>/*block or tile whatever it might bt and fill it with ascii characters nothing fancy just simple ocde!*/
#include"ASCII.h"  // update on the code so no requirement for 2 functions one for displaying and other for storing nwo all down under render fucntion
#define height 16
#define width 16
void render(int x,int y,int ch)
{
	static int tile[height][width];
	int i,j;
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(i==x && j==y)
			{
				if(ch==1)
	       	           {
			              ascii_display();
			              printf("\nwhat char no would you like to enter starting from 38: ");
			              scanf("%d",&ch);
		   	              system("cls");
			              printf("\n\n");
			              tile[x][y]=ch;
				          printf("%c ",tile[x][y]);
		                  break;	
			        }	
		       else
			   {
		    	     printf("0 ");
			       }
		   }
			else if(tile[i][j]>=40 && tile[i][j]<=255)
			{
                printf("%c ",tile[i][j]);
		     }
		    else
		     {
				printf(". ");
		    }		    
	}
	printf("\n");
}
}
int main()
{
 int ch,cursor_x=8,cursor_y=8,run,tile[16][16];
 int i,j;	
 printf("\nW,A,S,D to move cursor\n");
 while(run!=1)
 {
 	if(_kbhit())            //taking imput and 0 serving as a cursoe to navigate around the space to be filled
     switch(getch())
 	   {
 	    int ch=0;
 		case 'w':
 			 cursor_y--;
 			if(cursor_y>=0 && cursor_y<=15)
 			{
 			   system("cls");
 			   render(cursor_y,cursor_x,ch);
 		    }
 		    else{
 		    	cursor_y=height-height;
 		    	system("cls");
 		    	render(cursor_y,cursor_x,ch);
			 }
 			break;
 		case 'a':
 			cursor_x--;
 			if(cursor_x>=0 && cursor_x<=15)
 			{
 		     	system("cls");
 			    render(cursor_y,cursor_x,ch);
 			}
 			else{
 				cursor_x=width-width;
 				system("cls");
 		    	render(cursor_y,cursor_x,ch);
			 }    
 			break;
		case 's':
			 cursor_y++;
			 if(cursor_y>=0 && cursor_y<=15)
			 {
			   system("cls");
 			   render(cursor_y,cursor_x,ch);
 		     }
 		     else{
                cursor_y=height-1;
                system("cls");
 		    	render(cursor_y,cursor_x,ch);		     	
			  }
 			break;
		case 'd':
			cursor_x++;
			if(cursor_x>=0 && cursor_x<=15)
			{
		     system("cls");
 			 render(cursor_y,cursor_x,ch);
 		}
 		else
 		{
 			cursor_x=width-1;
 			system("cls");
 			render(cursor_y,cursor_x,ch);
		 }
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
return 0;
}

