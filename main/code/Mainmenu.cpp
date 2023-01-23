#include<ncurses.h>

using namespace std;

int main (int argc, char ** argv)
{
	initscr();
	printw("hello world!");
	refresh();
	int in = getch();
	printw("%d",in);
	getch();
	endwin();
	return 0;
}