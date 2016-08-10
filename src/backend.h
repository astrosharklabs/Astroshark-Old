#pragma once
#include "SDL.h"
#ifndef background_h
#define background_h
/*Takes a texture and queries it onto a rectangle, thereby creating a sprite*/
void createSprite(struct SDL_Window *, struct SDL_Renderer *, int, int, struct SDL_Texture *);

#endif background_h