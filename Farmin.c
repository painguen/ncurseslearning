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

char getCharacter()
{
    char c = getchar();
    int b = 0;
    do
    {
        b = getchar();
    } while (b != EOF && b != '\n');
    return c;
}

int growing(){
    printw("You have planted your crop\n");
    printw(".");
    sleep(10);
    refresh();
    printw("t");
    sleep(15);
    refresh();
    printw("Y");
    sleep(5);
    refresh();
    printw("You crop has finished growing.\n");
    crops++;
}

int main(){
char playerInput;
playerInput = getCharacter();
initscr(); // Starts the screen
printw("Open plots\nPlot One");
refresh();
printw("Coins : %i | Crops : %i",coins,crops);
refresh();
printw("To select a plot input it's number\n");
refresh();
if (playerInput==1){
    growing();
    refresh();
}
return 0;
}