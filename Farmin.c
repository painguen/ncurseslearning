#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int crops = 0;
int coins = 0;
int plotone = 1;
int plottwo = 0;
int plotthree = 0;
int plotfour = 0;

void move_relative(int y, int x)
{
    int current_y;
    int current_x;
    getsyx(current_y, current_x);
    move(current_y + y, current_x + x);
}

int growing(){
    printw("You have planted your crop\n");
    printw(".");
    refresh();
    sleep(3);
    move_relative(0, -1);
    printw("t");
    refresh();
    sleep(3);
    move_relative(0, -1);
    printw("Y");
    refresh();
    sleep(5);
    printw("\nYou crop has finished growing.\n");
    crops++;
}

int main(){
initscr(); // Starts the screen
int playerInput = 1;
printw("Coins : %i | Crops : %i\n",coins,crops);
printw("Open plots\nPlot One\n");
printw("To select a plot input it's number\n");
refresh();
if (playerInput==1){
    growing();
    refresh();
}
return 0;
}