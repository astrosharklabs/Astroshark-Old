#pragma once

#include "SDL.h"

#ifndef lasers_h
#define lasers_h

/*Struct for a laser*/
typedef struct laserObject {
	int rotate;
	int deltaX;
	int deltaY;
	SDL_Rect dstrect;
	SDL_Rect srcrect;
} laserInstance;

laserInstance spawnLaser(laserInstance);

#endif /* !lasers_h */