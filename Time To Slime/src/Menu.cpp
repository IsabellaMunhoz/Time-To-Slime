#include "Menu.h"

void Menu::UpdateMenu() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();

	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(1, 553, "Parede/Parede2.png"));

	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede.png"));

	paredes.push_back(new Labirinto(995, 1, "Parede/Parede.png"));
}

void Menu::DesenharMenu() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}