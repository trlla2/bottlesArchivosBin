#pragma once
#include "Bottles.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>




enum currentScenes {MENU, PLAYING};

struct MainManager{
	Bottles bottles[NUM_BOTTLES];

	currentScenes scene;
	bool isPlaying;
	int moves;
	int points;
	void initialize();
	
};