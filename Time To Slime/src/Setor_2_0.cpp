#include "Setor_2_0.h"


void Setor_2_0::UpdateSetor_2_0() {
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede.png"));//vertical
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(996, 405, "Parede/MeiaParede2.png"));

}

void Setor_2_0::DesenharSetor_2_0() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}