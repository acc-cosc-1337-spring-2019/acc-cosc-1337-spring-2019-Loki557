//#include "tic_tac_toe_manager.h"

#ifndef TICTACTOE_H
#define TICTACTOE_H
#include<string>
#include<vector>


using std::vector;
using std::string;
class TicTacToe 
{
public:
	//TicTacToe() {}
	TicTacToe(int s) : pegs(s * s, " ") {}
	TicTacToe(vector<string> s) { pegs = s; }
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	void display_board() const;
	friend std::ostream & operator << (std::ostream & out,
		const TicTacToe & t);
	friend std::istream & operator >> (std::istream & in,
		 TicTacToe & t);
	string get_player() const;
	string get_winner();
	const vector<string>& get_pegs();
	string determine_winner();

	//bool winner;
	
	friend class TicTacToeManager;
protected: 
	vector<string> pegs; 
	virtual bool check_column_win()=0;
	virtual bool check_row_win()=0;
	virtual bool check_diagonal_win()=0;
	string next_player;

private:
	//int size;
	string winner;
	void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	
	
	
};

#endif // !TICTACTOE_H