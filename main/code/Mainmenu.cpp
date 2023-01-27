#include <ncurses.h>
#include <string>
using namespace std;
int curs_set(int visibility);


// the ratio of y to x is 1:2.22 
// example:
// if you want a square that is a 10x10, you would have 10y and 22x (22.2) 


int main (int argc, char ** argv)
{
	curs_set(0);
	initscr();
	noecho();
	cbreak();
	// some terminals cant have colors other then black and white, if they have that type of terminal thise code wont work 
	if(!has_colors){
		printw("this terminal does not support colors, please find one that does");
		getch();
		return -1;
	}
	// some terminals cant change color, if they cant this code wont work 
	if(!can_change_color){
		printw("this terminal does not support changing colors. Please find one that does ");
		getch();
		return -1;
	}
	// gets the terminal size 
		int ymax, xmax;
		getmaxyx(stdscr, ymax, xmax);

	// creats a window for our input 
	WINDOW * menuwin = newwin(20,66,5,11);
	box(menuwin,0,0);
	refresh();
	wrefresh(menuwin);
	keypad(menuwin, true); // lets you use the arrow and function keys for input
	// example: if (c=KEY_UP) {...}

	string choices[3] = {"option 1", "option 2", "option 3"};
	int choice;
	int highlight = 0;

	while (1)
	{
		for(int i = 0; i< 3; i++){
			if (i == highlight){
				wattron(menuwin, A_REVERSE);
			}
			mvwprintw(menuwin,i+1,1,choices[i].c_str());
			wattroff(menuwin,A_REVERSE);
		}
		choice = wgetch(menuwin);

		switch(choice)
		{
			case KEY_UP:
				if (highlight > 0 ){
					highlight --; 
				}
				break;
			case KEY_DOWN:
				if (highlight < 2){
					highlight++;
				}
				break;
			default:
				break;

		}
		if(choice==10){
			break; }
	}

	printw("Your choice was: %s", choices [highlight].c_str());


	getch(); // make sure the program waits before terminating...
	endwin();
	return 0;
}