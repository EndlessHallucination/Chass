#include "Game.h"
#include <iostream>

int main()
{	
	auto game = Game();
	while (true)
	{
		game.chooseChessCoord();
		game.getBoard();
	}
}


