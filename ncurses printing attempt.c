#include <stdio.h>
#include <curses.h>

int main(){
printf("I am going to print something in ncurses.\n"); // This doesnt show.
initscr(); // Starts the screen
printw("hi nino!");
refresh();
getch();// this waits for user input before it closes
endwin();  // causes it to close
return 0;
}
// I guess I figured out how to do printing and set up ncurses so thats something.