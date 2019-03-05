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
	int pos_entry;
	
	do
	{
		cout << "Enter \"X\" or \"O\" to determine who goes first: ";
		cin >> entry1 ;
		TicTacToe game(entry1);
		
			
		while (game.game_over() == false)
        {
            game.display_board();
            cout << "\n Player " << game.get_player() << " enter a postion to mark (1-9): ";
            cin >> pos_entry;
            game.mark_board(pos_entry);

        } 
		TicTacToeManager g;
		g.TicTacToeManager::save_game(game);
		cout << "\nEnter 1 to player another game, or any other key to quit ";
		cin >> entry2;
		if (entry2 != "1")
			g.TicTacToeManager::display_history();

	} while (entry2 == "1");
	return 0;
}