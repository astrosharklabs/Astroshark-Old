#include "SDL.h"
#include <math.h>
#include <time.h>

enum location { TOP = 0, RIGHT, BOTTOM, LEFT };

/*Calculates the movement of an asteroid*/
void calculate_asteroidMovement(int *rotate, int *deltaX, int *deltaY, int spawnLocation) {
	srand(time(NULL));
	*deltaX = (rand() % 5) + 1;
	*deltaY = (rand() % 5) + 1;
	*rotate = (rand() % 20) + 1;
	int r = rand() % 2;
	if (r = 1)
		*rotate *= -1;
	if (spawnLocation == BOTTOM) {
		*deltaY *= -1;
		if (r == 1)
			*deltaY *= -1;
	}
	if (spawnLocation == RIGHT) {
		*deltaX *= -1;
		if (r == 0)
			*deltaY *= -1;
	}
	if (spawnLocation == LEFT && r == 1)
		*deltaY *= -1;
	if (spawnLocation == TOP && r == 1)
		*deltaX *= -1;
}