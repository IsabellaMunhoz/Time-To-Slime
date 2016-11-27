#include "Setor_1_2.h"

void Setor_1_2::UpdateSetor_1_2() {
	for (int i = 0; i < paredes.size(); i++) {
		delete paredes[i];
	}
	paredes.clear();
    paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede.png"));
    paredes.push_back(new Labirinto(570, 1, "Parede/MeiaParede.png"));
    paredes.push_back(new Labirinto(1, 675, "Parede/Parede2.png"));
    paredes.push_back(new Labirinto(1, 1, "Parede/MeiaParede2.png"));
    paredes.push_back(new Labirinto(1, 405, "Parede/MeiaParede2.png"));
    paredes.push_back(new Labirinto(996, 1, "Parede/Parede.png"));
    
    paredes.push_back(new Labirinto(130, 1, "Labirinto/vert.png"));
    paredes.push_back(new Labirinto(130, 405, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(370, 281, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(370, 319, "Labirinto/vert5.png"));
    paredes.push_back(new Labirinto(570, 157, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(570, 201, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(570, 405, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(570, 449, "Labirinto/vert5.png"));
	paredes.push_back(new Labirinto(700, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(700, 120, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(700, 531, "Labirinto/vert2.png"));
	paredes.push_back(new Labirinto(830, 1, "Labirinto/vert.png"));
	paredes.push_back(new Labirinto(830, 408, "Labirinto/vert.png"));

    paredes.push_back(new Labirinto(150, 157, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(370, 157, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(150, 281, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(370, 281, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(150, 405, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(190, 405, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(490, 405, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(150, 529, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(190, 529, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(490, 529, "Labirinto/hor5.png"));
	paredes.push_back(new Labirinto(150, 655, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(300, 655, "Labirinto/hor.png"));
	paredes.push_back(new Labirinto(520, 405, "Labirinto/hor3.png"));
	paredes.push_back(new Labirinto(830, 281, "Labirinto/hor3.png"));//assustar
	paredes.push_back(new Labirinto(830, 405, "Labirinto/hor3.png"));//assustar

	paredes.push_back(new Labirinto(950, 250, "Labirinto/quadrado.png"));
	paredes.push_back(new Labirinto(950, 410, "Labirinto/quadrado.png"));
}

void Setor_1_2::DesenharSetor_1_2() {
    for (int i = 0; i < paredes.size(); i++) {
        paredes[i]->imagem.draw(paredes[i]->parede);
    }
}

//espaco vertical = 124
//espaco horizontal = 130