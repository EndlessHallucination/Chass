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
		this->board[2][i] = EmptyField("e", "f");
		this->board[3][i] = EmptyField("e", "f");
		this->board[4][i] = EmptyField("e", "f");
		this->board[5][i] = EmptyField("e", "f");
	

	}
	for (size_t j = 0; j < board[1].size(); j++)
	{
		for (size_t i = 0; i < board[1].size(); i++)
		{
			std::cout << this->board[j][i].getName()<< this->board[j][i].getColor() << ' ';
		}
		std::cout << std::endl;
	}
	getMove();
}

void Game::getMove()
{
	choosePiece();
	chooseColor();
	chooseCoord();
}

void Game::chooseColor()
{
	std::cout << "Enter the color: w - white, b - black " << std::endl;
	char c;
	std::cin >> c;
	if (c != 'w' && c != 'b')
	{
		std::cout << "Wrong input "<< std::endl;
		chooseColor();
	}
}

void Game::chooseCoord()
{
	std::cout << "Enter the X coordinate " << std::endl;
	int x;
	std::cin >> x;
	if (x <= 0 || x > 9)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseCoord();
	}
	std::cout << "Enter the Y coordinate " << std::endl;
	int y;
	std::cin >> y;
	if (y <= 0 || y > 9)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseCoord();
	}
}

void Game::choosePiece()
{

	std::cout << std::endl << "Enter the chess piece: \n p - pawn \n k - knight \n b - bishop \n r - rook \n q - queen \n K - king\n" << std::endl;
	char chessPiece;
	std::cin >> chessPiece;
	switch (chessPiece) {
	case 'p': break;
	case 'k': break;
	case 'b': break;
	case 'r': break;
	case 'q': break;
	case 'K': break;
	default: {
		std::cout << "Wrong input" << std::endl;
		std::cout << "--------------------------" << std::endl;
		choosePiece();
	}
	}
}





