#include "Game.hpp"

Game *game = nullptr;

int main(int argc, char* args[])
{
	
	game = new Game();

	game->init("2dGameEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, false);

	while(game->running()){
		game->handleEvents();
		game->update();
		game->render();
	}	

	game-> clean();

	return 0;
}
