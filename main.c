#include<stdio.h>
#include<ncurses.h>

//gcc main.c -o main -lncurses

int main(){

  initscr();
  raw();

  mvprintw(3,3,"Hello world!");
  move(5,5);

  printw("hahahahaha");
  move(0,0);
  int litera = getch();
  move(9,5);

  printw("%c", litera);

  refresh();

  getch();
  endwin();

  return 0;
}
