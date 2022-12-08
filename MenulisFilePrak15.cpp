#include<fstream>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;
main(){
	ofstream infile;
	ifstream outfile;
	char sv_text;
	infile.open("DDPPRAKTIKUM.txt",ios::app);
	//outfile.open("DDPPRAKTIKUM.txt",ios::app);
	system("color 9");
	cout<<"-----------------------------\n";
	cout<<"MEMBACA FILE\n";
	cout<<"-----------------------------\n";
  char ch;

  cout << "Type some text (type a dot to finish):\n";
  do {
    ch = cin.get();
    if(ch=='.')continue;
    infile.put(ch);
  }while (ch!='.');
  infile.close();
  outfile.open("DDPPRAKTIKUM.txt",ios::app);
  if(!outfile.fail()){

		while(!outfile.eof()){
			outfile.get(sv_text);
			cout<<sv_text;
		}
}
		outfile.close();	

	getch();
	return 1;
}
