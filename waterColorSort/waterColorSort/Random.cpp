#include "Random.h"


int GenerateClampedRandom(int min, int max) {
	int result = min + rand() % ((max + 1) - min);
	return result;
}