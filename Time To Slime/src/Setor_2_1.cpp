#include "Setor_2_1.h"


void Setor_2_1::UpdateSetor_2_1() {
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede2.png"));//vertical
	paredes.push_back(new Labirinto(1, 405, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(570, 1, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(996, 405, "Parede/MeiaParede2.png"));

}

void Setor_2_1::DesenharSetor_2_1() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}