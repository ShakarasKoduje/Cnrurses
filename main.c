#include<stdio.h>
#include<ncurses.h>

//gcc main.c -o main -lncurses

int main(){

  initscr();
  raw();
  noecho();
  keypad(stdscr, TRUE);
  WINDOW * mainwin = newwin(3,50,10,10);
  box(mainwin,0,0);
  mvwprintw(mainwin,0,0, "\t\tYour movement Captain Omega!");
  mvwprintw(mainwin, 1,5, "Kamilka jest malutka");
  refresh();
  wrefresh(mainwin);


  //mvprintw(3,3,"Hello world!");





<<<<<<< HEAD
=======
  refresh();
  printw("%c", litera);

  printw("Dodane o 15:19 w repozytorium github");
>>>>>>> b7a774854b4427df983a2e393747d7d18957623e

  refresh();

  getch();
  endwin();

  return 0;
}
