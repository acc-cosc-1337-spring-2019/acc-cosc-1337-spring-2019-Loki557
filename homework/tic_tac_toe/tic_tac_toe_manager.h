#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include <vector>
#include <string>
//Write class interface here
class TicTacToeManager
{
public:
	//TicTacToeManager(TicTacToe g) : game(g) {}
	void save_game(const TicTacToe b);
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToeManager & t);
	void display_history() const;


private:
	string w;
	//TicTacToe game;
	vector<TicTacToe> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};


#endif // !TIC_TAC_TOE_MANAGER_H
