#include "Setor_1_1.h"

void Setor_1_1::UpdateSetor() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(570, 1, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(1, 405, "Parede/MeiaParede2.png"));
	paredes.push_back(new Labirinto(996, 405, "Parede/MeiaParede2.png"));

	//Labirinto (1,1)
	paredes.push_back(new Labirinto(400.5, 250, "Labirinto/quadrado.png"));
	paredes.push_back(new Labirinto(450, 250, "Labirinto/quadrado.png"));
	paredes.push_back(new Labirinto(500, 250, "Labirinto/quadrado.png"));
	paredes.push_back(new Labirinto(550, 250, "Labirinto/quadrado.png"));
	paredes.push_back(new Labirinto(400.5, 410, "Labirinto/quadrado.png"));
	paredes.push_back(new Labirinto(550, 410, "Labirinto/quadrado.png"));

	paredes.push_back(new Labirinto(151, 132, "Labirinto/hor2.png"));
	paredes.push_back(new Labirinto(151, 250, "Labirinto/hor2.png"));
	paredes.push_back(new Labirinto(430.5, 555, "Labirinto/hor2.png"));
	paredes.push_back(new Labirinto(280, 410, "Labirinto/hor4.png"));

	paredes.push_back(new Labirinto(550, 1, "Labirinto/vert2.png"));
	paredes.push_back(new Labirinto(150, 250, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(431, 2, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(430.5, 425, "Labirinto/vert4.png"));
}

void Setor_1_1::UpdateInimigos() {
	angle = angle <= 360 ? angle + ofGetLastFrameTime() : 0;
	float x = sin(angle) * 290 / 2;
	float x2 = sin(angle) * 200 / 2;

	for (int i = 0; i < inimigos.size(); i++) {
		delete inimigos[i];
	}
	inimigos.clear();

	inimigos.push_back(new Inimigo(600 + x, 400, "Inimigo.png"));
	inimigos.push_back(new Inimigo(348, 330, "Inimigo.png"));
}

void Setor_1_1::DrawSetor() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}

void Setor_1_1::DrawInimigos() {
	for (int i = 0; i < inimigos.size(); i++) {
		inimigos[i]->m_image.draw(inimigos[i]->m_position);
	}
}