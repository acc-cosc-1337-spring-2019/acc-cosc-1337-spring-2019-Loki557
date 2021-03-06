#include <vector>
#include <string>
#include <iostream>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;
/*TicTacToe::TicTacToe(int s)
{
	if (s == 3)
		size = 3;
	else if (s == 4)
		size == 4;

}*/
/*TicTacToe::TicTacToe(string first_player)
{
	start_game(first_player);
}*/
bool TicTacToe::game_over()
{
	if (check_column_win() || check_diagonal_win() || check_row_win())
	{
		
		//cout << "\n Winner";
		set_winner();
		return true;
		
		
	}
	else if (check_board_full())
	{
		//cout << "\nTie Game!";
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

void TicTacToe::determine_winner()
{
	bool empty_peg = false;
	int x_count = 0, o_count = 0;
	for (auto p : pegs)
	{
		if (p == " ")
			empty_peg = true;
		else if (p == "X")
			++x_count;
		else if (p == "O")
			++o_count;
	}
	if (empty_peg == false)
		winner = "C";

	else if (x_count > o_count)
		winner = "X";
	else if (x_count < o_count)
		winner = "O";
}

string TicTacToe::get_winner()
{
	return winner;
}

const vector<string>& TicTacToe::get_pegs()
{
	return pegs;
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	int p = 0;
	if (t.pegs.size() == 9)
	{
		for (int r = 1; r <= 3; ++r)
		{
			cout << "|";
			for (int c = 1; c <= 3; ++c)
			{
				cout << t.pegs[p] << "|";
				++p;
			}
			cout << "\n";
		}
	}
	else if (t.pegs.size() == 16)
	{
		for (int r = 1; r <= 4; ++r)
		{
			cout << "|";
			for (int c = 1; c <= 4; ++c)
			{
				cout << t.pegs[p] << "|";
				++p;
			}
			cout << "\n";
		}
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & t)
{
	
	int pos_entry;
	cout << "\n Player " << t.get_player() << " enter a postion to mark (1-9): ";
	cin >> pos_entry;
	t.mark_board(pos_entry);
	return in;
}
