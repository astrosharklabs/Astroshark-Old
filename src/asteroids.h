#pragma once

#include "SDL.h"

#ifndef asteroids_h
#define asteroids_h

void calculate_asteroidMovement(int*, int*, int*, int);

/*Struct for an asteroid*/
typedef struct asteroidCharacter {
	int rotate;
	int deltaX;
	int deltaY;
	int type;
	int size;
	int health;
	int spawnLocation;
	SDL_Rect asteroid_dstrect;
	SDL_Rect asteroid_srcrect;
	SDL_Rect hitBox;
} asteroidInstance;

#endif /* !asteroids_h */