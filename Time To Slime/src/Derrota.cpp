#include "Derrota.h"


void Derrota::UpdateDerrota() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));//vertical
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/Parede.png"));

	paredes.push_back(new Labirinto(150, 150, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(150, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(289, 150, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(289, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(428, 150, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(428, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(567, 150, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(567, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(706, 150, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(706, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(845, 150, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(845, 255, "Labirinto/vert.png"));

	paredes.push_back(new Labirinto(150, 150, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(150, 535, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(450, 150, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(450, 535, "Labirinto/hor.png"));
}

void Derrota::DrawDerrota() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}