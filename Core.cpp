#include "Core.h"
#include <Windows.h>
#include <iostream>


EngineCore::EngineCore() {
    SDL_Init(SDL_INIT_EVERYTHING);
    sys_width = GetSystemMetrics(0);
    sys_heigth = GetSystemMetrics(1);
    window = SDL_CreateWindow("C++ SDL2 Window", 0, 0, sys_width, sys_heigth, SDL_WINDOW_SHOWN);
    renderer = renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);      // setting draw color
    SDL_RenderClear(renderer);      // Clear the newly created window
    SDL_RenderPresent(renderer);
    //screen_surface = SDL_GetWindowSurface(window);
    SDL_UpdateWindowSurface(window);
    while (true) {
        SDL_Event ev;
        while (SDL_PollEvent(&ev)) {
            if (ev.type == SDL_MOUSEBUTTONDOWN) {
                int xMouse, yMouse;
                SDL_GetGlobalMouseState(&xMouse, &yMouse);
                SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
                SDL_RenderDrawPoint(renderer, xMouse, yMouse);
                SDL_RenderPresent(renderer);
            }
            
        }
    }
    SDL_RenderDrawLine(renderer, 0, 0, 1920, 1080);
};

EngineCore::~EngineCore() {
    delete window;
    //delete screen_surface;
    SDL_DestroyWindow(window);
    SDL_Quit();
}

std::pair<unsigned short int, unsigned short int> EngineCore::get_screen_size()
{
    return std::make_pair(sys_width, sys_heigth);
}



