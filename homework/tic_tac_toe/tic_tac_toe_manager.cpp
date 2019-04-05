#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <vector>
#include <string>
//Write class function implementations here
using std::cout;
using std::string;
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{

	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
	/*games.push_back(b);
	TicTacToe copy = b;
	string winner = copy.get_winner();
	update_winner_count(winner);*/
	
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}
}

/*void TicTacToeManager::display_history() const
{
	int i = 1;
	for (auto g : games)
	{
		cout << "\n Game " << i<<"\n";
		g->display_board();
		cout << "\n";
		++i;
		
	}
	cout << "\n X Wins: " << x_win << "\n O Wins: " << o_win << "\n Ties: " << ties;
}*/

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
		++x_win;
	else if (winner == "O")
		++o_win;
	else if (winner == "C")
		++ties;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & t)
{
	int a = 1;
	for (auto & g: t.games)
	{
		cout << "\n Game " << a << "\n";
		out << *g;
		cout << "\n";
		++a;

	}
	cout << "\n X Wins: " << t.x_win << "\n O Wins: " << t.o_win << "\n Ties: " << t.ties;
	return out;
}
