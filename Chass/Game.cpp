#include "Game.h"

Game::Game()
{
	//negro

	this->board[0][0] = Rook("b", "r");
	this->board[0][1] = Knight("b", "k");
	this->board[0][2] = Bishop("b", "b");
	this->board[0][3] = King("b", "K");
	this->board[0][4] = Queen("b", "q");
	this->board[0][5] = Bishop("b", "b");
	this->board[0][6] = Knight("b", "k");
	this->board[0][7] = Rook("b", "r");

	//whites

	this->board[7][0] = Rook("w", "r");
	this->board[7][1] = Knight("w", "k");
	this->board[7][2] = Bishop("w", "b");
	this->board[7][3] = King("w", "K");
	this->board[7][4] = Queen("w", "q");
	this->board[7][5] = Bishop("w", "b");
	this->board[7][6] = Knight("w", "k");
	this->board[7][7] = Rook("w", "r");

	for (int i = 0; i < board[1].size(); i++)
	{		
		this->board[6][i] = Pawn("w", "p");
		this->board[1][i] = Pawn("b", "p");
		this->board[2][i] = EmptyField("O", "O");
		this->board[3][i] = EmptyField("O", "O");
		this->board[4][i] = EmptyField("O", "O");
		this->board[5][i] = EmptyField("O", "O");
	

	}
	for (size_t j = 0; j < board[1].size(); j++)
	{
		for (size_t i = 0; i < board[1].size(); i++)
		{
			std::cout << this->board[j][i].getName()<< this->board[j][i].getColor() << ' ';
		}
		std::cout << std::endl;
	}
	chooseChessCoord();
	for (size_t j = 0; j < board[1].size(); j++)
	{
		for (size_t i = 0; i < board[1].size(); i++)
		{
			std::cout << this->board[j][i].getName() << this->board[j][i].getColor() << ' ';
		}
		std::cout << std::endl;
	}
}



void Game::chooseChessCoord()
{
	int x;
	int y;
	int xx;
	int yy;
	std::cout << "Enter the X coordinate " << std::endl;
	std::cin >> x;
	if (x <= 0 || x > 9)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseChessCoord();
	}
	std::cout << "Enter the Y coordinate " << std::endl;
	std::cin >> y;
	if (y <= 0 || y > 9)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseChessCoord();
	}

	std::cout << "Enter new X coordinate " << std::endl;
	std::cin >> xx;
	if (xx <= 0 || xx > 9)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseChessCoord();
	}
	std::cout << "Enter new Y coordinate " << std::endl;
	std::cin >> yy;
	if (yy <= 0 || yy > 9)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseChessCoord();
	}
	this->board[x][y] = this->board[xx][yy];
	
}











