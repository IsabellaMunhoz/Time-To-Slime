#include "Setor_1_0.h"


void Setor_1_0::UpdateSetor() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede.png"));//vertical
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(570, 1, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(996, 405, "Parede/MeiaParede2.png"));

	paredes.push_back(new Labirinto(875, 281, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(745, 461, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(620, 461, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(495, 461, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(370, 461, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(245, 461, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(120, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(120, 281, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(120, 141, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(450, 1, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(230, 1, "Labirinto/vert3.png"));
	paredes.push_back(new Labirinto(340, 120, "Labirinto/vert3.png"));

	paredes.push_back(new Labirinto(890, 281, "Labirinto/hor4.png"));
	paredes.push_back(new Labirinto(745, 561, "Labirinto/hor4.png"));
	paredes.push_back(new Labirinto(620, 461, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(650, 461, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(370, 461, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(415, 461, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(495, 561, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(540, 561, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(245, 561, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(290, 561, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(130, 281, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(130, 301, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(130, 321, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(370, 281, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(370, 301, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(370, 321, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(450, 151, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(490, 151, "Labirinto/hor.png"));
}

void Setor_1_0::UpdateInimigos() {
	angle = angle <= 360 ? angle + ofGetLastFrameTime() : 0;
	float x = sin(angle) * 650 / 2;
	float x2 = sin(angle) * 770 / 2;

	for (int i = 0; i < inimigos.size(); i++) {
		delete inimigos[i];
	}
	inimigos.clear();

	inimigos.push_back(new Inimigo(480 + x, 370, "Inimigo.png"));
	inimigos.push_back(new Inimigo(540 + x2, 600, "Inimigo.png"));
}

void Setor_1_0::DrawSetor() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}

void Setor_1_0::DrawInimigos() {
	for (int i = 0; i < inimigos.size(); i++) {
		inimigos[i]->m_image.draw(inimigos[i]->m_position);
	}
}