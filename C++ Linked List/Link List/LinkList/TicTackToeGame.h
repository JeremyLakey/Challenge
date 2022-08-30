#pragma once

class TicTackToeGame
{
public:
	TicTackToeGame();
	~TicTackToeGame();

	char getWinner();
	char checkDiagonals();
	char checkColumn(int column);
	char checkRow(int row);
	void setBoard(int a, int b, char c);


	char** board;
private:

};

TicTackToeGame::TicTackToeGame()
{
	board = new char* [3];
	for (size_t i = 0; i < 3; i++) {
		board[i] = new char[3];
		for (size_t j = 0; j < 3; j++) {
			board[i][j] = '-';
		}
	}
}

TicTackToeGame::~TicTackToeGame()
{
	for (size_t i = 0; i < 3; i++) {
		delete[] board[i];
	}
	delete[] board;
}

char TicTackToeGame::checkDiagonals() {
	char space = this->board[0][0];
	if (space != '-') {
		if (space == this->board[1][1] && space == this->board[2][2]) {
			return space;
		}
	}

	space = this->board[0][2];
	if (space != '-') {
		if (space == this->board[1][1] && space == this->board[2][0]) {
			return space;
		}
	}

	return '-';
}

char TicTackToeGame::checkColumn(int column) {
	char space = board[0][column];
	if (space == board[1][column] && space == board[2][column]) {
		return space;
	}
	return '-';
}

char TicTackToeGame::checkRow(int row) {
	char space = board[row][0];
	if (space == board[row][1] && space == board[row][2]) {
		return space;
	}
	return '-';
}

char TicTackToeGame::getWinner() {
	char result;
	for (int i = 0; i < 3; i++) {
		result = checkRow(i);
		if (result != '-') {
			return result;
		}
		result = checkColumn(i);
		if (result != '-') {
			return result;
		}
	}
	return checkDiagonals();
}


void TicTackToeGame::setBoard(int a, int b, char c) {
	board[a][b] = c;
}