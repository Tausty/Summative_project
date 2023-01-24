#include <ncurses.h>


using namespace std;

int main (int argc, char ** argv)
{
	initscr();

	int x,y;
	x = y = 10;
	move(y,x);


	printw("hello world!");


	refresh();


	int c = getch();

	move(0,0);

	printw("%d",c);


	getch();


	endwin();
	return 0;
}