
#include <stdio.h>
#include <conio.h>  // For _kbhit() and _getch()
#include"render_window.h"
#include<stdlib.h> //for rand()
#include<string.h>
void printGrid(int grid[display_height][display_width], int x, int y)
 {
 	int i,j,apple_positionx,apple_positiony;
 	char apple[display_width][display_height];
 	char snake='O';
    for (i = 0; i < display_width; i++) 
	{
	     apple_positionx= rand()%25+1;
	     apple_positiony= rand()%25+1;
	     apple[apple_positionx][apple_positiony]='0';
	     printf("%c ",apple[apple_positionx][apple_positiony]);
        for (j = 0; j < display_height; j++) {
        	
            if (i == x && j == y) {
                printf("%c ",snake);
            }
			else if ((i == x && j == y) && (i==apple_positionx-1 && i==apple_positiony-1))
			{
                  snake=strcat(snake,"O");
                  printf("%c ",snake);
                  printf(". ");
            } 
			else {
				printf(". ");
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int grid[display_height][display_width];
    int x = 2, y = 2;  // Starting position

    printf("Use arrow keys to move the object. Press 'q' to quit.\n");

    while (1) {
        if (_kbhit()) {
              char ch = _getch();
             if (ch == 0 || ch == 224) {
                 ch = _getch();  // Get the actual key code
                 switch (ch) {
                      case 72:  // Up arrow
                          if (x > 0) x--;
                         
                          break;
                      case 80:  // Down arrow
                          if (x < display_width - 1) x++;
                          system("cls");
                          break;
                     case 75:  // Left arrow
                         if (y > 0) y--;
                         system("cls");
                         break;
                     case 77:  // Right arrow
                          if (y < display_width - 1) y++;
                          system("cls");
                          break;
                }
            } else if (ch == 'q') {
                printf("Exiting...\n");
                break;
            }
            printGrid(grid, x, y);
        }
    }

    return 0;
}

