#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <vector>
#include <string>
#include <memory>
//Write class interface here
class TicTacToeManager
{
public:
	//TicTacToeManager(TicTacToe g) : game(g) {}
	TicTacToeManager();
	void save_game(std::unique_ptr<TicTacToe>& game);
	std::unique_ptr<TicTacToe> get_game(int game_type);
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToeManager & t);
	//void display_history() const;
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);



private:
	string w;
	//TicTacToe game;
	TicTacToeData data;
	vector<std::unique_ptr<TicTacToe>> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};


#endif // !TIC_TAC_TOE_MANAGER_H
