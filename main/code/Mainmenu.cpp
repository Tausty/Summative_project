#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<ncurses.h>

using namespace std;

int main (int argc, char ** argv)
{
	initscr();
	printw("hello world!");
	refresh();
	int c = getch();
	printw("%d",c);
	getch();
	endwin();
	return 0;
}