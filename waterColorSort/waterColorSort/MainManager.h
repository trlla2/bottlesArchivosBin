#pragma once
#include "Bottles.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>



enum currentScenes {MENU, PLAYING};

struct MainManager{
	Bottles bottles[NUM_BOTTLES];

	bool playing;
	int mxMoves;
	int moves;
	void initialize();
	
};