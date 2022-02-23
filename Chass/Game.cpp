#include "Game.h"

Game::Game()
{
	std::cout << "Enter the chess piece: \n p - pawn \n kn - knight \n b - bishop \n r - rook \n q - queen \n k - king\n" << std::endl;
	char chessPiece;
	std::cin >> chessPiece;
	switch (chessPiece) {
	case 'p': break;
	case 'kn': break;
	case 'b': break;
	case 'r': break;
	case 'q': break;
	case 'k': break;
	default: {
		std::cout << "Wrong input" << std::endl;
		std::cout << "--------------------------" << std::endl;
	}
	}
	std::cout << "Enter the X coordinate " << std::endl;
	char x;
	std::cin >> x;
	std::cout << "Enter the Y coordinate " << std::endl;
	int y;
	std::cin >> y;
}

void Game::getBoard()
{
	int board[8][8] =
	{ -1, -2, -3, -4, -5, -3, -2, -1,
	  -6, -6, -6, -6, -6, -6, -6, -6,
	   0,  0,  0,  0,  0,  0,  0,  0,
	   0,  0,  0,  0,  0,  0,  0,  0,
	   0,  0,  0,  0,  0,  0,  0,  0,
	   0,  0,  0,  0,  0,  0,  0,  0,
	   6,  6,  6,  6,  6,  6,  6,  6,
	   1,  2,  3,  4,  5,  3,  2,  1 }; 
}
