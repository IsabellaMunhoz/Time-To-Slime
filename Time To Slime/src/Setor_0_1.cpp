#include "Setor_0_1.h"


void Setor_0_1::UpdateSetor_0_1() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede2.png"));//vertical
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(1, 405, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/Parede.png"));

	paredes.push_back(new Labirinto(25, 405, "Labirinto/hor4.png"));
	paredes.push_back(new Labirinto(155, 155, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(465, 155, "Labirinto/hor.png"));

	paredes.push_back(new Labirinto(155, 155, "Labirinto/vert2.png"));
	paredes.push_back(new Labirinto(865, 155, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(865, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(725, 155, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(725, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(585, 305, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(585, 455, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(445, 305, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(445, 455, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(305, 155, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(305, 255, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(155, 405, "Labirinto/vert4.png"));

}

void Setor_0_1::DesenharSetor_0_1() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}