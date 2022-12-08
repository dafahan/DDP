#include <ctime>
#include <iostream>

using namespace std;

void generate_maze(int height, int width) {
	char **p_p_maze = NULL;
	p_p_maze = new char*[height];
	for (int i = 0; i < height; i++) {
		p_p_maze[i] = new char[width];
	}

	for (int i = 0; i <= height+10; i++) {
		for (int j = 0; j <= width+10; j++) {
			p_p_maze[i][j] = 'x';
			cout << p_p_maze[i][j];
		}
		cout << '\n';
	}

}


int main() {
	generate_maze(55,190);
	system("pause");
}
