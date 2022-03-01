#include "Game.h"

Game::Game()
{
	this->turnOrder = true;

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
	getBoard();
	chooseChessCoord();
	getBoard();
}



void Game::chooseChessCoord()
{
	unsigned int x;
	unsigned int y;
	unsigned int xx;
	int yy;
	std::cout << "Enter the X coordinate " << std::endl;
	std::cin >> x;
	if (x < 0 || x > 8)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseChessCoord();
	}
	std::cout << "Enter the Y coordinate " << std::endl;
	std::cin >> y;
	if (y < 0 || y > 8)
	{
		std::cout << "Wrong input " << std::endl;;
		chooseChessCoord();
	}
	

	std::cout << "Enter new X coordinate " << std::endl;
	std::cin >> xx;
	std::cout << "Enter new Y coordinate " << std::endl;
	std::cin >> yy;

	//pawnmove
	if (this->board[x][y].getName() == "p" && this->board[x][y].getColor() == "b")
	{
		if (x == 1) {
			if (xx <= 3 && xx >= 2) {
				this->board[xx][yy] = this->board[x][y];
				this->board[x][y] = EmptyField("O", "O");
			}
			else if (xx > 3 || xx < 2) {
				std::cout << "wrong" << std::endl;
			}
		}
		else if (x > 1 || x < 8) {
			if (xx - x == 1 ) {
				this->board[xx][yy] = this->board[x][y];
				this->board[x][y] = EmptyField("O", "O");
			}
		}
		else {
			std::cout << "wrong" << std::endl;
		}

	}
	//blackpawnmove
	if (this->board[x][y].getName() == "p" && this->board[x][y].getColor() == "w")
	{
		if (x == 6) {
			if (xx <= 5 && xx >= 4) {
				this->board[xx][yy] = this->board[x][y];
				this->board[x][y] = EmptyField("O", "O");
			}
			else if (xx > 4 || xx < 5) {
				std::cout << "wrong" << std::endl;
			}
		}
		else if (x >= 0 || x <=7) {
			if (xx - x == -1) {
				this->board[xx][yy] = this->board[x][y];
				this->board[x][y] = EmptyField("O", "O");
			}
		}
		else {
			std::cout << "wrong" << std::endl;
		}
	}

	
	this->turnOrder = !this->turnOrder;
}

void Game::getBoard()
{
	for (size_t j = 0; j < board[1].size(); j++)
	{
		for (size_t i = 0; i < board[1].size(); i++)
		{
			std::cout << this->board[j][i].getName() << this->board[j][i].getColor() << ' ';
		}
		std::cout << std::endl;
	}
}














