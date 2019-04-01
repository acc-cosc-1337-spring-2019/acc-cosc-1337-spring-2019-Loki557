//header
//header
#ifndef TICTACTOE4_H
#define TICTACTOE4_H
#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4() : four(4) {}

private:
	TicTacToe four;
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};

#endif // !TICTACTOE4_H