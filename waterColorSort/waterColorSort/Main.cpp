#include "MainManager.h"


void PrintBottles(MainManager manager);

int main() {
	MainManager manager;
	manager.initialize();
	
	PrintBottles(manager);
}

void PrintBottles(MainManager manager) {
	// porto 4 putas hores p fer aquest codi de merda em bui tallar els hous
	for (int i = 0; i < NUM_BOTTLES; i++) {
		std::cout << "|V|";
	}
	std::cout << std::endl;
	int misHuebos = BOTTLES_SIZE - 1;
	for (int j = 0; j < BOTTLES_SIZE; j++){
		for (int i = 0; i < NUM_BOTTLES; i++) {

			std::cout << "|" << manager.bottles[i].values[misHuebos] << "|";
			
		}
		std::cout << std::endl;
		misHuebos--;
	}
	for (int j = 0; j < NUM_BOTTLES; j++) {
		std::cout << "'''";
	}
	std::cout << std::endl;
	for (int j = 0; j < NUM_BOTTLES; j++) {
		std::cout << " " << j + 1 << " ";
	}
	std::cout << std::endl;
}
void LlenarBottellas(MainManager manager) {
	int resp;
	std::cout << "que botella quieres vaciar?" << std::endl;
	do {
		std::cin >> resp;
	} while (resp >= 1 && resp <= NUM_BOTTLES);
	resp-=1;
	char alv;
	int kk = 0;
	do{
		alv = manager.bottles[resp].values[kk];
		kk++;
	} while (alv != ' ');
	int resp2;
	std::cout << "a que botella queires varciar" << std::endl;
	do {
		std::cin >> resp2;
	} while (resp2 >= 1 && resp2 <= NUM_BOTTLES &&  resp2 != resp && manager.bottles[resp2].values[3] == ' ');
	int kkk = 0;
	do {
		
		kkk++;
	} while (manager.bottles[resp2].values[kkk] == ' ');
	manager.bottles[resp2].values[kkk] = alv;
	manager.bottles[resp].values[kk] = ' ';
	
}