#include "MainManager.h"

void MainManager::initialize() {
	isPlaying = true;
	mxMoves = 3;
	moves = mxMoves;
	
	char liquid[] = { 'X' ,'O','S','#' };
	for (int i = 0; i < NUM_BOTTLES; i++) {
		bottles[i].values[0] = liquid[rand() % 4];
		bottles[i].values[1] = liquid[rand() % 4];
	}

	int rand1 = rand() % NUM_BOTTLES;
	int rand2 = rand() % NUM_BOTTLES;
	while (rand1 == rand2) {
		rand2 = rand() % NUM_BOTTLES;
	}

	bottles[rand1].values[2] = liquid[rand() % 4];
	bottles[rand2].values[2] = liquid[rand() % 4];

	points = 0;

	scene = PLAYING;

}

