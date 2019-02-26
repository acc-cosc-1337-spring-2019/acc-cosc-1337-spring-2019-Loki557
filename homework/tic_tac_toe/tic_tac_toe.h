#include<string>
#include<vector>

using std::vector;
using std::string;
class TicTacToe 
{
public:
	TicTacToe(string first_player);
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	void display_board() const;
	string get_player() const;
	bool winner;
private:
	string next_player;
	vector<string> pegs{ 9, " " };
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
};