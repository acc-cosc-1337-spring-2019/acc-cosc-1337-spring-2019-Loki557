#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player X") 
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	

	REQUIRE(tic_tac_toe->get_player() == "X");

}

TEST_CASE("Test game over")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();


	REQUIRE(tic_tac_toe->game_over() == false);

}

TEST_CASE("Test win by first column 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(4);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(7);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;

	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(1);
	//O
	tic_tac_toe1->mark_board(2);
	//X
	tic_tac_toe1->mark_board(4);
	//O
	tic_tac_toe1->mark_board(2);
	//X
	tic_tac_toe1->mark_board(7);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by first column 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(9);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(9);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;


	TicTacToe* tic_tac_toe1 = new TicTacToe4();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(9);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(9);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by second column 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(8);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
    REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(2);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(5);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(8);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by second column 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(10);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(14);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe4();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(10);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(14);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by third column 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(3);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(9);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(3);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(6);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(9);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by third column 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(3);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(11);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(15);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(3);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(11);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(15);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by fourth column 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(4);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(8);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(12);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(16);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(4);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(8);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(12);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(16); 

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by first row 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(4);
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(4);
	//X
	tic_tac_toe->mark_board(3);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;

	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(1);
	//O
	tic_tac_toe1->mark_board(4);
	//X
	tic_tac_toe1->mark_board(2);
	//O
	tic_tac_toe1->mark_board(4);
	//X
	tic_tac_toe1->mark_board(3);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by first row 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(3);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(4);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(3);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(4);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by second row 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(4);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(6);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;

	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(4);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(5);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(6);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by second row 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(8);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(8);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by third row 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(8);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
	
	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;

	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(7);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(8);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(9);
	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by third row 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(9);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(10);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(11);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(12);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(9);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(10);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(11);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(12);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win by fourth row 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(13);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(14);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(15);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(16);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(13);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(14);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(15);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(16);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win diagonally from top left 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(9);
	REQUIRE(tic_tac_toe->game_over() == true);
	
	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;

	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(1);
	//O
	tic_tac_toe1->mark_board(2);
	//X
	tic_tac_toe1->mark_board(5);
	//O
	tic_tac_toe1->mark_board(2);
	//X
	tic_tac_toe1->mark_board(9);
	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win diagonally from top left 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(11);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(16);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;

	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(11);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(16);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win diagonally from bottom left 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(5);
	//O
	tic_tac_toe->mark_board(1);
	//X
	tic_tac_toe->mark_board(3);

	REQUIRE(tic_tac_toe->game_over() == true);
	
	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe1->mark_board(7);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(5);
	//O
	tic_tac_toe1->mark_board(1);
	//X
	tic_tac_toe1->mark_board(3);

	REQUIRE(tic_tac_toe1->game_over() == true);
	
	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test win diagonally from bottom left 4")
{
	TicTacToe* tic_tac_toe = new TicTacToe4();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(13);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(10);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(4);

	REQUIRE(tic_tac_toe->game_over() == true);

	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "X");
	delete tic_tac_toe;
	TicTacToe* tic_tac_toe1 = new TicTacToe3();
	tic_tac_toe1->start_game("O");
	//X
	tic_tac_toe->mark_board(13);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(10);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(2);
	//X
	tic_tac_toe->mark_board(4);

	REQUIRE(tic_tac_toe1->game_over() == true);

	string winner1 = tic_tac_toe1->get_winner();
	REQUIRE(winner1 == "O");
	delete tic_tac_toe1;
}

TEST_CASE("Test tie 3")
{
	TicTacToe* tic_tac_toe = new TicTacToe3();
	tic_tac_toe->start_game("X");
	//X
	tic_tac_toe->mark_board(1);
	//O
	tic_tac_toe->mark_board(3);
	//X
	tic_tac_toe->mark_board(2);
	//O
	tic_tac_toe->mark_board(5);
	//X
	tic_tac_toe->mark_board(6);
	//O
	tic_tac_toe->mark_board(8);
	//X
	tic_tac_toe->mark_board(7);
	//O
	tic_tac_toe->mark_board(4);
	//X
	tic_tac_toe->mark_board(9);

	REQUIRE(tic_tac_toe->game_over() == true);
	
	string winner = tic_tac_toe->get_winner();
	REQUIRE(winner == "C");
	delete tic_tac_toe;
}