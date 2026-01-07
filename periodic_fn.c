#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep function

#define ARRAY_SIZE 20

// Function to print the array with the character
void printArray(char array[], int position)
 {
 	int i;
    for (i = 0; i < ARRAY_SIZE; i++) {
        if (i == position) {
            printf("X"); // Character to move
        } else {
            printf("-");
        }
    }
    printf("\n");
}

// Function to update the character position
void updatePosition(int *position) {
    *position = (*position + 1) % ARRAY_SIZE; // Move to next position, wrap around using modulo
}

int main() {
    char array[ARRAY_SIZE];
    int position = 0,i; // Initial position of the character

    // Initialize array
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = '-';
    }

    // Set the interval in seconds
     int interval = 10000;   //its in microsconds ig

    // Loop to move the character periodically
    while (1) {
        printArray(array, position);
        updatePosition(&position);
        usleep(interval); // Pause execution for the specified interval
        system("cls");
    }

    return 0;
}

