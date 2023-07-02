#pragma once


#ifndef TEXTURE
#define TEXTURE


#include "SDL.h"
#include <string>

class Texture
{
	SDL_Renderer* renderer;
	SDL_Surface* surface;
	SDL_Texture* texture;
	SDL_Rect* rectangle;
public:

	Texture(SDL_Renderer*& rnd,const  std::string &path,
		int x, int y, int w, int h);

	~Texture();

	void set_position(int x, int y);

	void set_size(int w, int h);

};
#endif

