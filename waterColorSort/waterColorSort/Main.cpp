#include "MainManager.h"


void PrintBottles(MainManager manager);

int main() {
	MainManager manager;
	manager.initialize();
	
	PrintBottles(manager);
}

void PrintBottles(MainManager manager) {
	for (int i = 0; i < NUM_BOTTLES; i++) {
		std::cout << "\ /";
	}
	std::cout << std::endl;
	for (int i = 0; i < NUM_BOTTLES; i++) {
		for (int j = 0; j < BOTTLES_SIZE; j++) {
			std::cout << "|" <<manager.bottles[i].values[j] << "|";
		}
		std::cout << std::endl;
		
	}
	for (int j = 0; j < NUM_BOTTLES; j++) {
		std::cout << "'''";
	}
	std::cout << std::endl;
	for (int j = 0; j < NUM_BOTTLES; j++) {
		std::cout << j + 1;
	}
	std::cout << std::endl;
}