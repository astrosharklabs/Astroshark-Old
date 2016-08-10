#include <stdio.h>
#include <stdlib.h>
#include "SDL.h"
#include "SDL_image.h"

void createSprite(struct SDL_Window **gameWindow, struct SDL_Renderer **renderer, int *w, int *h, struct SDL_Texture **spriteTexture, const char *file) {
	SDL_Surface *tempSurface = IMG_Load(file);
	*spriteTexture = SDL_CreateTextureFromSurface(*renderer, tempSurface);
	SDL_FreeSurface(tempSurface);
	SDL_QueryTexture(*spriteTexture, NULL, NULL, w, h);
}