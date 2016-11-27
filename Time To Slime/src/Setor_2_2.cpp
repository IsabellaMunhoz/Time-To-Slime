#include "Setor_2_2.h"


void Setor_2_2::UpdateSetor_2_2() {
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));//vertical
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(1, 405, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/Parede.png"));

}

void Setor_2_2::DesenharSetor_2_2() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}