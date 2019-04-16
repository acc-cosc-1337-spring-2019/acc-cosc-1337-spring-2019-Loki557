#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"



/*
Write the code to save a vector of string into a file.
After writing all the vector strings add a new line character "\n" to file.
Close the file.
Use the fstream object and file_name(class variable). Open the file for
writing and append.
*/
void TicTacToeData::save_game(const vector<string>& pegs)
{
	fstream file (file_name, std::ios::out | std::ios::app);
	for (auto p : pegs)
	{
		file << p;
	}
	file << "\n";
	file.close();
}

/*
Read the file with fstream and file_name, open file for input(reading).
ALGORITHM:
Create unique ptr of TicTacToe boards
		  Open File
		  while file open
			 Create vector of string
			 get a line from file
			for each ch in line
			  Create a string with each ch use std::string(1, ch) to create the string

			Add the string to vector of string

			Create unique ptr of TicTacToe board

		   if vector peg size 9
			   create board of TicTacToe3 using make_unique
		  else
			   create board of TicTacToe4 using make_unique

			  add the board to the boards vector

		 close the file

		return the  vector  of TicTacToe
*/
vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	vector<unique_ptr<TicTacToe>> games;
	fstream file(file_name, std::ios::in);
	vector<string> saved_board;
	string line;
	string peg;
	while (getline(file, line))
	{
		for (auto l : line)
		{
			saved_board.push_back(string(1, l));
		}
		if (saved_board.size = 9)
		{
			unique_ptr<TicTacToe3> board(saved_board);
			games.push_back(board);
		}
	}
	file.close();


	return games;
}