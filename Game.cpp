#include <Game.hpp>

Game::Game()
{}
Game::~Game()
{}

void Game::init(cost char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flag = 0;
	if(fulscreen){
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if(SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Subsystem Initialised!..." << std::endl;

		window = SDL_CreateWindow(titte, xpos, ypos, widts, height, flags);
		if (window){
			std::cout << "Window created!" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (rendereer){
			std::Cout << "Renderer created!" << std::endl;
		}

		isRunning = true;
	}
	else {
		isRunning = false;
	}
}

void Game::handleEvents()
{

	SDL_Event event;


}

void Game::update()
{}

void Game::render()
{}

void Game::clear()
{}
