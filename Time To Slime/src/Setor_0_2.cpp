#include "Setor_0_2.h"


void Setor_0_2::UpdateSetor_0_2() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(570, 675, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/Parede.png"));

}

void Setor_0_2::DesenharSetor_0_2() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}