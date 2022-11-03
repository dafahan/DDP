#include<bits/stdc++.h>
#include<ncurses/ncurses.h>
#include <Windows.h>
#define sl Sleep(1000);
using namespace std;
main(){
	system("color 02");                                                                                              
	initscr();
	clear();
	
	for(int i=0;i<=4;i++){
		mvprintw(i,i,"D");
		refresh();
		sl
	}
	
	for(int i=0;i<=4;i++){
		mvprintw(i,i+1,"A");
		refresh();
		sl
	}
	for(int i=0;i<=4;i++){
		mvprintw(i,i+2,"F");
		refresh();
		sl
	}
	for(int i=0;i<=4;i++){
		mvprintw(i,i+3,"A");
		refresh();
		sl
	}
	getch();
	endwin();
}
