#include "MainManager.h"


void PrintBottles(MainManager manager);

int main() {
	MainManager manager;
	manager.initialize();
	
	do {
		switch (manager.scene) {
		case MENU:
			
			break;
		case PLAYING:
			PrintBottles(manager);
			
			
			break;
		default:
			break;
		}
	} while (manager.isPlaying);
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
//aaaaaa
void comprobacion(MainManager manager) {
	bool Pfinish = true;
	for (int i = 0; i < NUM_BOTTLES; i++) {
		if (manager.bottles[i].values[1] != manager.bottles[i].values[2] || manager.bottles[i].values[2] != ' ')
			Pfinish = false;

		if (manager.bottles[i].values[1] != manager.bottles[i].values[3] || manager.bottles[i].values[3] != ' ')
			Pfinish = false;
	}
	if (Pfinish) {
		std::cout << "Ya has acabado la partida" << std::endl;
		std::string(name);
		for (int i = 0; i < NUM_BOTTLES; i++) {
			//llenar ampolla
			if (manager.bottles[i].values[3] != ' ')
				manager.points += 30;
			//anpolla buida
			if (manager.bottles[i].values[1] != ' ')
				manager.points += 50;
			//move left
			if (manager.bottles[i].values[3] != ' ')
				manager.points += 3;
		}
		std::cout << "Has echo " << manager.points << " puntos" << std::endl;
		std::cout << "A que nombre quieres guardar la puntuacion??" << std::endl;
		std::cin >> name;
	}
}
void Menu(MainManager manager) {
	int respuesta;
	bool respCorrecta;
	std::cout << "-----Water Color Sort-----" << std::endl;
	std::cout << "1 Nueva Partida" << std::endl;
	std::cout << "2 Scores" << std::endl;
	std::cout << "3 Salir" << std::endl;
	std::cout << "que quieres ahcer?" << std::endl;
	do {
		std::cin >> respuesta;
		if (respuesta >= 1 && respuesta <= 3) {
			respCorrecta = true;
		}
		else {
			respCorrecta = false;
		}

	} while (respCorrecta);
	switch (respuesta) {
		case 1:
			manager.scene = PLAYING;
			break;
		case 2:
			//score things
			break;
		case 3:
			manager.isPlaying = false;
	}

	system("cls");
}
void Scores(MainManager manager) {
	std::cout << "-----SCORES-----" << std::endl;

}