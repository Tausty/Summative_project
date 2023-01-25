#include <ncurses.h>
#include<cstdlib>



using namespace std;

int main (int argc, char ** argv)
{
	initscr();
	cbreak();
	noecho();
	int height,width,starty,startx;
	height = 10;
	starty = 10;
	startx = 10;
	width = 20;
	WINDOW * win = newwin(height,width,starty,startx);
	refresh();

	box (win,0,0);
	int left,right,top,bottem,tlc,trc,blc,brc;
	left=right=top=bottem=tlc=trc=blc=brc=102;
	wborder(win,left,right,top,bottem,tlc,trc,blc,brc);
	mvwprintw(win,2,5,"option 1");
	wrefresh(win);
	mvwprintw(win,5,5,"option 2");
	wrefresh(win);
	int c = getch();
	if (c==int('1')) {
		mvwprintw(win,2,3,">");
	}
	else {
		mvwprintw(win,5,3,">");
	}
	wrefresh(win);

	getch();
	endwin();
	return 0;
}