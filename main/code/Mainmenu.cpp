#include <ncurses.h>




using namespace std;

int main (int argc, char ** argv)
{
	initscr();
	cbreak();
	if(!has_colors){
		printw("this terminal does not support colors, please find one that does");
		getch();
		return -1;
	}
	if(!can_change_color){
		printw("this terminal does not support changing colors. Please find one that does ");
		getch();
		return -1;
	}



	getch();
	endwin();
	return 0;
}