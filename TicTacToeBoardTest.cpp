/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
*/


TEST(TicTacToeBoardTest, smokeTest)
{
	TicTacToeBoard obj;
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, toggleTurn)
{
	TicTacToeBoard obj;
	Piece tmp = obj.toggleTurn();
	ASSERT_TRUE(tmp == 'O');
	tmp = obj.toggleTurn();
	ASSERT_TRUE(tmp == 'X');
}

TEST(TicTacToeBoardTest, placePiece)
{
	TicTacToeBoard obj;
	
	ASSERT_TRUE(obj.placePiece(-1,2) == '?');
	ASSERT_TRUE(obj.placePiece(3,2) == '?');
	ASSERT_TRUE(obj.placePiece(1,-6) == '?');
	ASSERT_TRUE(obj.placePiece(-1,12) == '?');
	ASSERT_TRUE(obj.placePiece(0,0) == 'X');
	ASSERT_TRUE(obj.placePiece(0,1) == 'O');
	ASSERT_TRUE(obj.placePiece(0,2) == 'X');
	ASSERT_TRUE(obj.placePiece(0,0) == 'X');
	
}

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	ASSERT_TRUE(obj.getPiece(0,0) == 'X');
	ASSERT_TRUE(obj.getPiece(0,1) == ' ');
	ASSERT_TRUE(obj.getPiece(-1,2) == '?');
	ASSERT_TRUE(obj.getPiece(3,2) == '?');
	ASSERT_TRUE(obj.getPiece(1,-6) == '?');
	ASSERT_TRUE(obj.getPiece(-1,12) == '?');
	
}

TEST(TicTacToeBoardTest, getWinnerFull)
{
	TicTacToeBoard obj;
	ASSERT_TRUE(obj.getWinner() == '?');
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(0,2);
	obj.placePiece(1,1);
	obj.placePiece(1,0);
	obj.placePiece(1,2);
	obj.placePiece(2,2);
	obj.placePiece(2,0);
	obj.placePiece(2,1);
	ASSERT_TRUE(obj.getWinner() == ' ');
	
}

TEST(TicTacToeBoardTest, getWinnerDiag1)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(1,1);
	obj.placePiece(0,2);
	obj.placePiece(2,2);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerDiag2)
{
	TicTacToeBoard obj;
	obj.placePiece(0,2);
	obj.placePiece(0,1);
	obj.placePiece(1,1);
	obj.placePiece(0,0);
	obj.placePiece(2,0);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerRow1)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(1,0);
	obj.placePiece(0,2);
	obj.placePiece(2,0);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerRow2)
{
	TicTacToeBoard obj;
	obj.placePiece(1,0);
	obj.placePiece(0,1);
	obj.placePiece(1,1);
	obj.placePiece(0,2);
	obj.placePiece(1,2);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerRow3)
{
	TicTacToeBoard obj;
	obj.placePiece(2,0);
	obj.placePiece(0,1);
	obj.placePiece(2,1);
	obj.placePiece(0,2);
	obj.placePiece(2,2);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerCol1)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(1,1);
	obj.placePiece(0,1);
	obj.placePiece(2,2);
	obj.placePiece(0,2);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerCol2)
{
	TicTacToeBoard obj;
	obj.placePiece(1,0);
	obj.placePiece(0,1);
	obj.placePiece(1,1);
	obj.placePiece(0,2);
	obj.placePiece(1,2);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerCol3)
{
	TicTacToeBoard obj;
	obj.placePiece(2,0);
	obj.placePiece(0,1);
	obj.placePiece(2,1);
	obj.placePiece(0,2);
	obj.placePiece(2,2);
	ASSERT_TRUE(obj.getWinner() == 'X');
	
}

TEST(TicTacToeBoardTest, getWinnerO)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(1,0);
	obj.placePiece(2,1);
	obj.placePiece(1,1);
	obj.placePiece(2,2);
	obj.placePiece(1,2);
	ASSERT_TRUE(obj.getWinner() == 'O');
	
}