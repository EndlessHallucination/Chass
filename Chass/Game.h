#pragma once
#include "Bishop.h"
#include "Rook.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"
#include "Knight.h"
#include "EmptyField.h"
#include <iostream>
#include <array>
class Game
{
private:
	std::array<std::array<Figure, 8>, 8> board;
	bool turnOrder;
public:
	Game();
	void chooseChessCoord();
	void getBoard();
	
};

