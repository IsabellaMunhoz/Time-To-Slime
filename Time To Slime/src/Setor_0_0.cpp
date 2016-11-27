#include "Setor_0_0.h"


void Setor_0_0::UpdateSetor() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();

	paredes.push_back(new Labirinto(1, 1, "Parede/Parede.png"));//vertical
	paredes.push_back(new Labirinto(1, 1, "Parede/Parede2.png"));
	paredes.push_back(new Labirinto(1, 675, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(570, 675, "Parede/MeiaParede.png"));
	paredes.push_back(new Labirinto(996, 1, "Parede/Parede.png"));

	paredes.push_back(new Labirinto(118, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(248, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(268, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(288, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(308, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(433, 400, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(453, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(473, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(493, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(618, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(638, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(658, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(678, 400, "Labirinto/vert4.png"));
	paredes.push_back(new Labirinto(868, 245, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(868, 130, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(118, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(248, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(268, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(288, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(308, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(433, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(453, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(473, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(493, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(618, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(638, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(658, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(678, 1, "Labirinto/vert.png"));

	paredes.push_back(new Labirinto(433, 545, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(488, 545, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(20, 281, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(20, 400, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(788, 130, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(678, 230, "Labirinto/hor5.png"));
}

void Setor_0_0::UpdateInimigos() {
	angle = angle <= 360 ? angle + ofGetLastFrameTime() : 0;
	float y = cos(angle) * 525 / 2;
	float y2 = cos(angle) * 420 / 2;

	for (int i = 0; i < inimigos.size(); i++) {
		delete inimigos[i];
	}
	inimigos.clear();

	inimigos.push_back(new Inimigo(158, 320 + y, "Inimigo.png"));
	inimigos.push_back(new Inimigo(348, 320 + y, "Inimigo.png"));
	inimigos.push_back(new Inimigo(533, 260 + y2, "Inimigo.png"));
}

void Setor_0_0::DrawSetor() {
	for (int i = 0; i < paredes.size(); i++) {
		paredes[i]->imagem.draw(paredes[i]->parede);
	}
}

void Setor_0_0::DrawInimigos() {
	for (int i = 0; i < inimigos.size(); i++) {
		inimigos[i]->m_image.draw(inimigos[i]->m_position);
	}
}