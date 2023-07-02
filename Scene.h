#pragma once
#ifndef SCENE
#define SCENE
#include "SDL.h"
#include <string>

class Scene
{	
	SDL_Renderer * renderer;
	SDL_Window* window;
public:
	Scene(SDL_Renderer*& rnd, SDL_Window*& wnd) {
		renderer = rnd;
		window = wnd;
	}

};

#endif