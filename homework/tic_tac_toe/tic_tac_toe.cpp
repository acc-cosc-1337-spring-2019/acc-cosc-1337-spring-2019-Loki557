#include <vector>
#include <string>
#include <iostream>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;
TicTacToe::TicTacToe(string first_player)
{
	start_game(first_player);
}
bool TicTacToe::game_over()
{
	if (check_column_win() || check_diagonal_win() || check_row_win())
	{
		
		cout << "\n Winner";
		set_winner();
		return true;
		
		
	}
	else if (check_board_full())
	{
		cout << "\nTie Game!";
		set_winner();
		return true;
	}
	else
		return false;
}
void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
}

void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	bool end_game = game_over();
	if (end_game == false)
		set_next_player();
}

void TicTacToe::display_board() const
{
	int p = 0;
	for (int r = 1; r <= 3; ++r)
	{
		cout << "|";
		for (int c = 1; c <= 3; ++c)
		{
			cout << pegs[p] << "|";
			++p;
		}
		cout << "\n";
	}
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X")
		next_player = "O";
	else if (next_player == "O")
		next_player = "X";
}

bool TicTacToe::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
		return true;
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
		return true;
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
		return true;
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
		return true;
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
		return true;
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
		return true;
	else
		return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
		return true;
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
		return true;
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
		return true;
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
		return true;
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
		return true;
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
		return true;
	else
		return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
		return true;
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
		return true;
	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
		return true;
	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
		return true;
	else
		return false;
}

void TicTacToe::clear_board()
{
	for (auto& p : pegs)
		p = " ";
}

bool TicTacToe::check_board_full()
{
	for (int p = 0; p < 9; ++p)
	{
		if (pegs[p] == " ")
			return false;
	}
	
	return true;
}

void TicTacToe::set_winner()
{
	if (check_board_full())
		winner = "C";
	else
		winner = next_player;
}

string TicTacToe::get_winner()
{
	return winner;
}
