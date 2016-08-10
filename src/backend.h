#pragma once
#include "SDL.h"
#ifndef backend_h
#define backend_h
/*Takes a texture and queries it onto a rectangle, thereby creating a sprite*/
void createSprite(struct SDL_Window *, struct SDL_Renderer *, int, int, struct SDL_Texture *);

#endif backend_h