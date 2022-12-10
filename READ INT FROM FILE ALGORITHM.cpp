#include<fstream>
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main() {
   ifstream file;
   file.open("Map1.txt");
	char a;
	int now=-1;
	int bf=-1;
	while(!file.eof()){
		file.get(a);
		if(isdigit(a)){
			if(bf!=-1){
				now=bf*10+(a-'0');
			}else{
				now=a-'0';
				bf=a-'0';
			}

		}else{
			bf=-1 ;
			if(now!=-1) cout<<now<<' ';
			now=-1;
		}
	}
	cin.get()	;
}
