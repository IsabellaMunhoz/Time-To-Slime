#include "Labirinto.h"

std::vector<Labirinto*> paredes;

Labirinto::Labirinto(float x, float y, const char* arquivoImagem) {
    char filename[300] = "ParedesLabirinto/";
    strcat(filename, arquivoImagem);
    
    parede.set(x, y);
    imagem.load(filename);
}

int Labirinto::x1() {
    return parede.x;
}

int Labirinto::x2() {
    return parede.x + imagem.getWidth();
}

int Labirinto::y1() {
    return parede.y;
}

int Labirinto::y2() {
    return parede.y + imagem.getHeight();
}

