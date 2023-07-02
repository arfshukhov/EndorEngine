#pragma once

#ifndef ENGINECORE

#define ENGINECORE

#include "SDL.h"
#include <iostream>

	
class EngineCore
{	
	unsigned short sys_width, sys_heigth;
	
	SDL_Window* window;
	SDL_Renderer* renderer;

public:
	EngineCore();

	~EngineCore();

	std::pair<unsigned short int, unsigned short int> get_screen_size();
};

#endif