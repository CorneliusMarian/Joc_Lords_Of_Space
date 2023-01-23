#include <iostream>
#include "Game.h"
#include "Player.h"
#include<time.h>
/*
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Window.hpp>
#include <SFML\Network.hpp> */

int main()
{
	srand(time(0));

	Game game;

	game.run();

	return 0;
}