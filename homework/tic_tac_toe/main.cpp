#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <vector>
#include <string>
#include <iostream>
//Ask about double winner and why it is only storing the last game in vector.
using std::cout;
using std::cin;
using std::string;
using std::vector;

int main() 
{
	string entry1, entry2 = "1";
	int entry3;
	
	TicTacToeManager g;
	do
	{
		cout << "Enter \"X\" or \"O\" to determine who goes first: ";
		cin >> entry1 ;
		cout << "Enter \"3\" for TicTacToe3 or \"4\" for TicTacToe4: ";
		cin >> entry3;

		TicTacToe * game(entry3);
		game->start_game(entry1);
		
			
		while (game->game_over() == false)
        {
			cout << *game;
			cin >> *game;
			

        } 
		//TicTacToeManager g;
		string winner = game->get_winner();
		if (winner == "C")
			cout << "\nTie Game.";
		else
			cout << "\nThe Winner is " << winner;
		g.TicTacToeManager::save_game(*game);
		cout << "\nEnter 1 to player another game, or any other key to quit ";
		cin >> entry2;
		if (entry2 != "1")
			cout << g;

	} while (entry2 == "1");
	
	return 0;
}