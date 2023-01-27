#include <ncurses.h>
#include <string>
#include <cstdlib>
#include <ctime>
class Player
{
  public:
    Player(WINDOW * win, int yc, int xc, char c);

    void mvup();
    void mvdown();
    void mvleft();
    void mvright();
    int  getmv();
    void display();

  private:
    int x, y, width, height;
    char character;
    WINDOW * curwin;
};

Player::Player(WINDOW * win, int yc, int xc, char c)
{
  curwin = win;
  y = yc;
  x = xc;
  getmaxyx(curwin, height, width);
  keypad(curwin, true);
  character = c;
}

void Player::mvup()
{
  mvwaddch(curwin, y, x, ' ');
  y -= 1;
  if(y < 1)
    y = 1;
}

void Player::mvdown()
{
  mvwaddch(curwin, y, x, ' ');
  y += 1;
  if(y > yMax-1)
    y = yMax-1;
}

void Player::mvleft()
{
  mvwaddch(curwin, y, x, ' ');
  x -= 1;
  if(x < 1)
    x = 1;
}

void Player::mvright()
{
  mvwaddch(curwin, y, x, ' ');
  x += 1;
  if(x > xMax-1)
    x = xMax-1;
}

int Player::getmv()
{
  int choice = wgetch(curwin);
  switch(choice)
  {
    case KEY_UP:
      mvup();
      break;
    case KEY_DOWN:
      mvdown();
      break;
    case KEY_LEFT:
      mvleft();
      break;
    case KEY_RIGHT:
      mvright();
      break;
    default:
      break;
  }
  return choice;
}

void Player::display()
{
  mvwaddch(curwin, y, x, character);
}

using namespace std;

// the ratio of y to x is 1:2.22 
// example:
// if you want a square that is a 10x10, you would have 10y and 22x (22.2) 


int main (int argc, char ** argv)
{
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
	WINDOW * playwin = newwin(20,50,(ymax/2)-10,10);
	box(playwin,0,0);
	refresh();
	wrefresh(playwin);
	keypad(playwin, true); // lets you use the arrow and function keys for input
	// example: if (c=KEY_UP) {...}

    Player * p = new Player(playwin,1,1,'@');
    while(p->getmv()!='x')
    {
        p->display();
        wrefresh(playwin);
    }
}