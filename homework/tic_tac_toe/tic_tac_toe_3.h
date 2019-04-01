//header
#ifndef TICTACTOE3_H
#define TICTACTOE3_H
#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3() : three(3) {}

private:
	TicTacToe three;
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};




#endif // !TICTACTOE3_H