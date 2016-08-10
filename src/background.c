#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"
#include "SDL_image.h"

void createBackground(struct SDL_Window **gameWindow, struct SDL_Renderer **renderer, int *w, int *h, struct SDL_Texture **spriteTexture) {
	SDL_Surface *tempSurface = IMG_Load("resources/gfx/background_1920x1920.png");
	*spriteTexture = SDL_CreateTextureFromSurface(*renderer, tempSurface);
	SDL_FreeSurface(tempSurface);
	SDL_QueryTexture(*spriteTexture, NULL, NULL, w, h);
}