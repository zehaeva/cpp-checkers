// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Checkers {
	int board[8][8];
	int size = 8;
public:
	Checkers() {
		int player;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				player = 0;
				if ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0)) {
					if (i < 3) {
						player = 2;
					}
					else if (i > 4) {
						player = 1;
					}
				}
				board[i][j] = player;
			}
		}
	}
	int get(int x, int y) {
		return board[x][y];
	}
	void set(int x, int y, int player) {
		board[x][y] = player;
	}
	void move(int x, int y, int i, int j) {
		
	}
	void print() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				switch (board[i][j]) {
				case 0:
					cout << "_";
					break;
				case 1:
					cout << "B";
					break;
				case 2:
					cout << "R";
					break;
				}
				cout <<  " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	int exitme;
	Checkers board;
	board.print();
	cin >> exitme;
    return 0;
}

