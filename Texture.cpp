#include "Texture.h"


Texture::Texture(SDL_Renderer*& rnd, const std::string& path,
						int x, int y, int w, int h) 
{	
	
	surface = SDL_LoadBMP(path.c_str());
	texture = SDL_CreateTextureFromSurface( renderer, surface);
	rectangle->x = x;
	rectangle->y = y;
	rectangle->w = w;
	rectangle->h = h;
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, rectangle);
	SDL_RenderPresent(renderer);
}

void Texture::set_position(int x, int y) {

}

Texture::~Texture() {
	delete surface, texture, rectangle;
	SDL_DestroyTexture(texture);
}
