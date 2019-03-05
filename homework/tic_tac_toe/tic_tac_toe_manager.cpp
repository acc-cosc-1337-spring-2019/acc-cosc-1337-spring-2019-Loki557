#include "tic_tac_toe_manager.h"
#include <iostream>
#include <vector>
#include <string>
//Write class function implementations here
using std::cout;
using std::string;
void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);
	string winner = b.get_winner();
	update_winner_count(winner);
	
}

void TicTacToeManager::display_history() const
{
	for (auto g : games)
	{
		g.display_board();
	}
	cout << "\n X Wins: " << x_win << "\n O Wins: " << o_win << "\n Ties: " << ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
		++x_win;
	else if (winner == "O")
		++o_win;
	else if (winner == "C")
		++ties;
}
